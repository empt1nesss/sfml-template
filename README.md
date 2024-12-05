# SFML Template

Run this line to clone template
```bash
git clone --recurse-submodules -j8 https://github.com/empt1nesss/sfml-template.git
```
If you don't need some components just erase or comment them here (CMakeLists.txt, ln. 9)
```cmake
set(REQUIRED_SFML_LIBS
  sfml-system
  sfml-window
  sfml-graphics
  sfml-audio
  sfml-network
)
```