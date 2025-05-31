# traverse

[![CI](https://github.com/vargaconsulting/traverse/actions/workflows/ci.yml/badge.svg)](https://github.com/vargaconsulting/traverse/actions/workflows/ci.yml)
[![Build](https://img.shields.io/badge/build-passing-brightgreen)](https://github.com/vargaconsulting/traverse/actions)
[![License](https://img.shields.io/badge/license-MIT-blue)](./LICENSE)
[![Rust Version](https://img.shields.io/badge/rust-1.76%2B-orange)](https://www.rust-lang.org/)
[![Platform](https://img.shields.io/badge/platform-Linux-lightgrey)](https://www.kernel.org/)
[![GitHub release](https://img.shields.io/github/v/release/vargaconsulting/traverse.svg)](https://github.com/vargaconsulting/traverse/releases)
[![Documentation](https://img.shields.io/badge/docs-stable-blue)](https://vargaconsulting.github.io/traverse)


# traverse
Navigate Your Devices Effortlessly

## Compile & Run

This project uses [Cargo](https://doc.rust-lang.org/cargo/) as its build system and requires a working installation of `BlueZ` and `DBus`.

### Prerequisites

Ensure `bluetoothd` is running and your system has the BlueZ stack installed (default on most modern Linux distributions).

```bash
sudo systemctl start bluetooth
````

You may also want to verify DBus is running:

```bash
systemctl --user status dbus
```

### Build the project

```bash
cargo build
```

### Run the project

```bash
cargo run
```

Expected output should include your default Bluetooth adapter name and its power state, for example:

```
Using adapter: hci0
Adapter is powered: true
```

### Notes

* The project depends on the `bluer` crate with the `bluetoothd` feature enabled.
* Runtime requires Linux with BlueZ and `bluetoothd` running.
* You'll need proper permissions or `CAP_NET_ADMIN` for certain operations.

