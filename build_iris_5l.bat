qmk config compile.keymap=colemak5L
cd F:\Git\qmk_firmware\keyboards\keebio\iris\rev8
qmk compile

qmk json2c2 /F/git/qmk_firmware/keyboards/keebio/iris/keymaps/colemak5L/keymap.json
qmk c2json -km colemak5L -kb keebio/iris/rev8 /F/git/qmk_firmware/keyboards/keebio/iris/keymaps/colemak5L/keymap.c