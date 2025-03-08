import serial
import threading
import signal
import traceback
import forge


class SerialTerminal:
  """"
  Prints serial data to the console.
  """

  def __init__(self, serial_device, baud_rate):
    self.serial_device = serial_device
    self.baud_rate = baud_rate
    self.ser = None
    self.thread = None

  def read_serial(self):
    """
    Continuously read and print serial data.
    """
    forge.print_green("Starting serial terminal...")
    self.ser = serial.Serial(self.serial_device, self.baud_rate)
    try:
      while self.ser and self.ser.is_open:
        line = self.ser.readline().decode('utf-8').strip('\r\n')
        print(line)
    except Exception as e:
      if self.ser and self.ser.is_open:
        print(f"Serial error: {e}")
        traceback.print_exc()
    finally:
      if self.ser and self.ser.is_open:
        self.ser.close()
        print("Serial connection closed.")

  def read_background(self):
    """
    Reads the serial terminal in a background thread.
    """
    self.thread = threading.Thread(target=self.read_serial, daemon=False)
    self.thread.start()
    signal.signal(signal.SIGINT, self.signal_handler)
    print("Ctrl+c to exit serial terminal.")

  def signal_handler(self, sig, frame):
    """
    Handle Ctrl+C and exit cleanly.
    """
    print("\nClosing serial terminal...")
    self.cleanup()

  def __del__(self):
    """
    Calls cleanup.
    """
    self.cleanup()

  def cleanup(self):
    """
    Cleans up resources.
    """
    if self.ser and self.ser.is_open:
      self.ser.close()
