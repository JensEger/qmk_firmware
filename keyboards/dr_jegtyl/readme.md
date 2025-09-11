# dr_jegtyl

![dr_jegtyl](imgur.com image replace me!)

This is the QMK Configuration for the 4x6 Dactyl Split Keyboard designed with the Cosmos Keyboard Configurator
Keyboard Design: https://ryanis.cool/cosmos/beta#cm:Cu0BCh0SCRCAbyAnQABIABICIBMSAiAAEgA4HkCA7ouQAwolEgkQgGMgJ0AASAASAiATEgIgABIDELA7EgUQwGsgKDgKQICEDAonEgkQgFcgJ0AASAASAiATEgIgABIDELAvEgUQwF8gKDgJQICYh/gBChkSCRCASyAnQABIABICIBMSAiAAEgA4HUAAChkSCRCAPyAnQABIABICIBMSAiAAEgA4MUAACjcSCyAnQABIAGIDREVMEgoQECATYgRCYWNrEgsQoIAKIABiA1NmdBIHEDBiA0FMVDgyQIDui5ADGABA6IWgrvBVSOCswsACCqcBCjMSFggWEDBAvYWwjqB3SMKZoJWQvAFQiwISFxDAgAJAgICYAkjCmaCVkLwBUENiAkw3OAgKGRIUEEBAgIAgSNCVgN2Q9QNQC2ICTDhQngIKGBIUEEBAgIiAAkjmmfynkAtQV2ICTDZQfwoDUIICChkSFBBAQJ3aNEjsl5SewPYCUFdiAkw1UMcCGAIiCgjIARDIARhZIABAy4v8n9AxSK2R3I3BkwYK6QEKIBIJEIADICdAAEgAEgIgExIFELAHIAASADgdQIDui5ADCiISCRCADyAnQABIABICIBMSAiAAEgASBRDAayAoOAlAgIQMCiQSCRCAGyAnQABIABICIBMSAiAAEgASBRDAXyAoOApAgJiH+AEKGRIJEIAnICdAAEgAEgIgExICIAASADgeQAAKGRIJEIAzICdAAEgAEgIgExICIAASADgyQAAKNhILICdAAEgAYgNFU0MSCRAQIBNiA1RBQhILELCACiAAYgNTZnQSBxAwYgNDVEw4MUCA7ouQAxgBQOeFoK7wVUjgqsK4AgqQAQobEhcQwIACQICAmAJIwpmclaC8AVBDYgJMMjgHChkSFBBAQICAIEjQlfzcoPUDUAtiAkwxUJ0CChkSFBBAQICA+AFI5pmArKALUFdiAkwzUIABCgNQgQIKGRIUEEBAmu5ESOqXuJ6w+QJQV2ICTDRQyAIYAyIKCMgBEMgBGFkgAEDMi/yf0DFIrZHgjbGTBhACGIwgIgkI0AEQvgEgkgk4AoIBCIIBiwGCAYwBWFBgA2gAchyQAfoBEKwCKCMwFjgbeKQ/oAEAoAEAoAEAoAEA

* Keyboard Maintainer: [Jens Eger](https://github.com/JensEger)
* Hardware Supported: Lemon wired
* Hardware Availability: https://ryanis.cool/cosmos/lemon/

Make example for this keyboard (after setting up your build environment):

    make dr_jegtyl:default

Flashing example for this keyboard:

    make dr_jegtyl:default:flash

See the [build environment setup](https://docs.qmk.fm/#/getting_started_build_tools) and the [make instructions](https://docs.qmk.fm/#/getting_started_make_guide) for more information. Brand new to QMK? Start with our [Complete Newbs Guide](https://docs.qmk.fm/#/newbs).

## Bootloader

Enter the bootloader in 3 ways:

* **Bootmagic reset**: Hold down the key at (0,0) in the matrix (usually the top left key or Escape) and plug in the keyboard
* **Physical reset button**: Briefly press the button on the back of the PCB - some may have pads you must short instead
* **Keycode in layout**: Press the key mapped to `QK_BOOT` if it is available
