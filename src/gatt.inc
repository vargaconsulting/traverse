use uuid::Uuid;

/// Service UUID for GATT example.
const SERVICE_UUID: uuid::Uuid = uuid::Uuid::from_u128(0x00001812_0000_1000_8000_00805f9b34fb);

/// Characteristic UUID for GATT example.
const CHARACTERISTIC_UUID: uuid::Uuid = uuid::Uuid::from_u128(0xF00DC0DE00001);

/// Manufacturer id for LE advertisement.
#[allow(dead_code)]
const MANUFACTURER_ID: u16 = 0xf00d;


// HID Report Map characteristic
const HID_REPORT_MAP_UUID: Uuid = Uuid::from_u128(0x2A4B);

// HID Report (where you send input/output data)
const HID_REPORT_UUID: Uuid = Uuid::from_u128(0x2A4D);

// Boot Keyboard Input Report (optional, for classic HID boot mode)
const BOOT_KEYBOARD_INPUT_UUID: Uuid = Uuid::from_u128(0x2A22);

// Boot Mouse Input Report (optional, for classic HID boot mode)
const BOOT_MOUSE_INPUT_UUID: Uuid = Uuid::from_u128(0x2A33);

// Protocol Mode (report or boot)
const PROTOCOL_MODE_UUID: Uuid = Uuid::from_u128(0x2A4E);

// HID Information (version/country)
const HID_INFORMATION_UUID: Uuid = Uuid::from_u128(0x2A4A);

// HID Control Point (suspend/wake)
const HID_CONTROL_POINT_UUID: Uuid = Uuid::from_u128(0x2A4C);
