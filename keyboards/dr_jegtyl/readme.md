# dr_jegtyl

![dr_jegtyl](imgur.com image replace me!)

This is the QMK Configuration for the 4x6 Dactyl Split Keyboard designed with the Cosmos Keyboard Configurator
Keyboard Design: https://ryanis.cool/cosmos/beta#cm:CtYBCh0SCRCAbyAnQABIABICIBMSAiAAEgA4HkCA7ouQAwolEgkQgGMgJ0AASAASAiATEgIgABIDELA7EgUQsGsgKDgKQICEDAonEgkQgFcgJ0AASAASAiATEgIgABIDELAvEgUQsF8gKDgJQICYh/gBChkSCRCASyAnQABIABICIBMSAiAAEgA4HUAAChkSCRCAPyAnQABIABICIBMSAiAAEgA4MUAACiASBiAnQABIABICIBMSBhCggAogABICEDA4MkCA7ouQAxgAQOiFoK7wVUjgrMLAAgqXAQovEhYIFhAwQL2FsI6gd0jCmaCVkLwBUIsCEhMQwIACQICAmAJIwpmglZC8AVBDOAgKFRIQEEBAgIAgSNCVgN2Q9QNQC1CeAgoUEhAQQECAiIACSOaZ/KeQC1BXUH8KA1CCAgoVEhAQMECd2jRI7JeUnsD2AlBXUMcCGAIiCgjIARDIARhZIABAy4v8n9AxSK2R3I3BkwYK0AEKHRIJEIADICdAAEgAEgIgExICIAASADgdQIDui5ADCiISCRCADyAnQABIABICIBMSAiAAEgASBRCwayAoOAlAgIQMCiQSCRCAGyAnQABIABICIBMSAiAAEgASBRCwXyAoOApAgJiH+AEKGRIJEIAnICdAAEgAEgIgExICIAASADgeQAAKGRIJEIAzICdAAEgAEgIgExICIAASADgyQAAKIBIGICdAAEgAEgIgExIGEKCACiAAEgIQMDgxQIDui5ADGAFA54WgrvBVSOCqwrgCCoABChcSExDAgAJAgICYAkjCmZyVoLwBUEM4BwoVEhAQQECAgCBI0JX83KD1A1ALUJ0CChUSEBBAQICA+AFI5pmArKALUFdQgAEKA1CBAgoVEhAQMECa7kRI6pe4nrD5AlBXUMgCGAMiCgjIARDIARhZIABAzIv8n9AxSK2R4I2xkwYQAhiMICIJCNABEL4BIJIJOAKCAQiCAYsBggGMAVhQYANoAHIckAH6ARCsAigjMBY4G3ikP6ABAKABAKABAKABAA==

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
