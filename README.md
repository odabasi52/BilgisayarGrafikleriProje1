# Bilgisayar Grafikler 1. Proje Ödevi

## Giriş
Bilgisayar Grafikleri 2025 dönemi proje ödevi olarak, ışıklandırma ve primitive şekiller kullanılarak oluşturulan şekillerle sahne yapılmamız istendi. Bu repo ilgili ödevi ve raporu içermektedir.

## Proje Raporu
Proje raporuna Rapor.pdf dosyası ile ulaşabilirsiniz.

## Tanıtım Videosu
Tanıtım videosuna yandaki linkten ulaşabilirsiniz. [Youtube](https://youtu.be/sWLjLhBytE0)

## 3 Farklı Kamera Açısından Görüntü
![1. Kamera Açısı](SS/0.png)
![2. Kamera Açısı](SS/1.png)
![3. Kamera Açısı](SS/2.png)

## Teknik Detay
Teknik detaylar (class içerikleri, açıklamalar) için Rapor.pdf' i inceleyiniz. Readme içerisinde teknik detaya yer verilmeyecektir, programı çalıştırma ve kişisel güncellemeler hakkında detay verilecektir.

## Compile Etmek
Compile etmek için 2 seçenek vardır. Ya Makefile kullanılarak doğrudan compile edilir ya da manuel olarak komut yazılır.
```bash
# makefile ile doğrudan çalıştır
make run

# manuel olarak compile et
g++ -I glad/include  *.cpp glad/src/glad.c -lglfw -ldl -o main
```

## Texture ve Blok eklemek
- İlk olarak ilgilendiğiniz Minecraft Blok Texture' unu [minecraft.wiki](https://minecraft.wiki/w/Category:Block_textures) üzerinden seçip indirin ve Resources klasörü içerisine koyun.

- Sonrasında texture' u Resources klasörüne kayıt edip aşağıdaki şekilde bloğunuzu oluşturabilirsiniz:
```cpp
Mesh coalCube = createCube(x, y, z, "Resources/coal.png", GL_RGB);
Mesh glassCube = createCube(x, y, z, "Resources/glass.png", GL_RGBA);
```

- Son olarak main loop içerisinde ilgili cismi çizin:
```cpp
// Draws different meshes
coalCube.Draw(shaderProgram, camera);
		
// draw transparent textures like glass
glEnable(GL_BLEND);
glBlendFunc(GL_SRC_ALPHA, GL_ONE_MINUS_SRC_ALPHA);
glassCube.Draw(shaderProgram, camera);
glDisable(GL_BLEND);
```

