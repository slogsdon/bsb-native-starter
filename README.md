# bsb-native-starter

Quick and simple starter project to leverage [`bsb-native`](https://github.com/bsansouci/bsb-native) and [Reason](https://reasonml.github.io/)/[OCaml](https://ocaml.org/) in order to build an application.

## Install Dependencies

```
yarn install # or npm install
```

## Build Project

```
yarn build # or npm run build
```

## Run Project

```
yarn start # or npm start
```

## Use the `bytecode` Backend

By default, this project will build using the `native` backend for `bsb`. To use the `bytecode` backend, update the `build` script in `package.json` to remove `-backend native` or update it to `-backend bytecode`. This will also require a change to the `start` script in `package.json`, which defaults to `./lib/bs/native/main.native`, to be changed to `./lib/bs/bytecode/main.byte`.

> Note: The `bytecode` backend is already configured in `bsconfig.json`.

## Add the `js` Backend

In theory, this project will also support generating JavaScript code by configuring the `js` backend in `bsconfig.json`'s `entries` property:

```json
{
  "entries": [
    {
      "backend": "js",
      "main-module": "Main"
    }
  ]
}
```

This will ultimately depend on how this project is developed.

## LICENSE

This starter project is licensed under the MIT License. See [LICENSE](LICENSE) for more details.
