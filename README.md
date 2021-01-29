# opencv-wasm

## Prerequisite
emscripten はインストール済みであるとする。

参考サイト: https://emscripten.org/docs/getting_started/downloads.html

## opencvのビルド
参考サイト: https://docs.opencv.org/3.4/d4/da1/tutorial_js_setup.html

<!--
asm.js をビルドする場合:
> emcmake python ./opencv/platforms/js/build_js.py build_js
-->

```sh
emcmake python ./opencv/platforms/js/build_js.py build_wasm --build_wasm
```

## C++ソースのビルド
```sh
cd build/
emcmake cmake -DOpenCV_DIR=./build_wasm ..
emmake make
```

### 動作確認
> python3 -m http.server 8000

として http://localhost:8000/main.html を閲覧すると、
![result](https://user-images.githubusercontent.com/7417550/106248323-2a37b180-6254-11eb-9187-ee2ab020519f.png)
このような実行結果が表示される。
