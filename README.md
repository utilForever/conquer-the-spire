# conquer-the-spire

<img src="./Medias/Logos/Logo.png" width=256 height=256 />

[![License](https://img.shields.io/badge/Licence-MIT-blue.svg)](https://github.com/utilForever/conquer-the-spire/blob/master/LICENSE) [![Build Status](https://travis-ci.org/utilForever/conquer-the-spire.svg?branch=master)](https://travis-ci.org/utilForever/conquer-the-spire/branches) [![Build status](https://ci.appveyor.com/api/projects/status/github/utilForever/conquer-the-spire?branch=master&svg=true)](https://ci.appveyor.com/project/utilForever/conquer-the-spire/branch/master) [![Build Status](https://utilforever.visualstudio.com/conquer-the-spire/_apis/build/status/utilForever.conquer-the-spire?branchName=master)](https://utilforever.visualstudio.com/conquer-the-spire/_build/latest?definitionId=9&branchName=master)

[![codecov](https://codecov.io/gh/utilForever/conquer-the-spire/branch/master/graph/badge.svg)](https://codecov.io/gh/utilForever/conquer-the-spire)
[![Codacy Badge](https://api.codacy.com/project/badge/Grade/3e1f5dc4c5484c1dad24168da3c1059b)](https://www.codacy.com/manual/utilForever/conquer-the-spire?utm_source=github.com&amp;utm_medium=referral&amp;utm_content=utilForever/conquer-the-spire&amp;utm_campaign=Badge_Grade)
[![Total alerts](https://img.shields.io/lgtm/alerts/g/utilForever/conquer-the-spire.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/utilForever/conquer-the-spire/alerts/)
[![Language grade: C/C++](https://img.shields.io/lgtm/grade/cpp/g/utilForever/conquer-the-spire.svg?logo=lgtm&logoWidth=18)](https://lgtm.com/projects/g/utilForever/conquer-the-spire/context:cpp)
[![CodeFactor](https://www.codefactor.io/repository/github/utilforever/conquer-the-spire/badge)](https://www.codefactor.io/repository/github/utilforever/conquer-the-spire)

[![Quality Gate Status](https://sonarcloud.io/api/project_badges/measure?project=conquer-the-spire&metric=alert_status)](https://sonarcloud.io/dashboard?id=conquer-the-spire) [![Lines of Code](https://sonarcloud.io/api/project_badges/measure?project=conquer-the-spire&metric=ncloc)](https://sonarcloud.io/dashboard?id=conquer-the-spire) [![Maintainability Rating](https://sonarcloud.io/api/project_badges/measure?project=conquer-the-spire&metric=sqale_rating)](https://sonarcloud.io/dashboard?id=conquer-the-spire) [![Reliability Rating](https://sonarcloud.io/api/project_badges/measure?project=conquer-the-spire&metric=reliability_rating)](https://sonarcloud.io/dashboard?id=conquer-the-spire) [![Security Rating](https://sonarcloud.io/api/project_badges/measure?project=conquer-the-spire&metric=security_rating)](https://sonarcloud.io/dashboard?id=conquer-the-spire)

conquer-the-spire is Slay the Spire simulator using C++ with some reinforcement learning. The code is built on C++17 and can be compiled with commonly available compilers such as g++, clang++, or Microsoft Visual Studio. conquer-the-spire currently supports macOS (10.14 or later), Ubuntu (18.04 or later), Windows (Visual Studio 2017 or later), and Windows Subsystem for Linux (WSL). Other untested platforms that support C++17 also should be able to build conquer-the-spire.

## Key Features

  * C++17 based Slay the Spire library
  * Console and GUI simulator program
  * C++ and Python API

## Implementation List

  * Cards
    * Ironclad Cards
    * Silent Cards
    * Defect Cards
    * Colorless Cards
    * Status
    * Curse
  * Characters
    * Ironclad
    * Silent
    * Defect
  * Enemies
    * Monsters
    * Elites
    * Bosses
  * Others
    * Events
    * Relics
    * Potions
    * Merchant
    * Ascension
  * Reinforcement learning
    * Connecting with PyTorch C++ API
    * Applying DQN and so on
  * API Support
    * Python

## Quick Start

You will need CMake to build the code. If you're using Windows, you need Visual Studio 2017 in addition to CMake.

First, clone the code:

```
git clone https://github.com/utilForever/conquer-the-spire.git --recursive
cd conquer-the-spire
```

### C++ API

For macOS or Linux or Windows Subsystem for Linux (WSL):

```
mkdir build
cd build
cmake ..
make
```

For Windows:

```
mkdir build
cd build
cmake .. -G"Visual Studio 15 2017 Win64"
MSBuild conquer-the-spire.sln /p:Configuration=Release
```

### Docker

```
docker pull utilforever/conquer-the-spire:latest
```

## Documentation

TBA

## How To Contribute

Contributions are always welcome, either reporting issues/bugs or forking the repository and then issuing pull requests when you have completed some additional coding that you feel will be beneficial to the main project. If you are interested in contributing in a more dedicated capacity, then please contact me.

## Contact

You can contact me via e-mail (utilForever at gmail.com). I am always happy to answer questions or help with any issues you might have, and please be sure to share any additional work or your creations with me, I love seeing what other people are making.

## License

<img align="right" src="http://opensource.org/trademarks/opensource/OSI-Approved-License-100x137.png">

The class is licensed under the [MIT License](http://opensource.org/licenses/MIT):

Copyright © 2020 conquer-the-spire Team

- [Chris Ohk](https://github.com/utilForever)
- [Sangyun Chung](https://github.com/starga2er)
- [Seokwon Moon](https://github.com/you4rin)
- [Taehwan Yu](https://github.com/PhoenixPlanet)
- [Jinwoo Park](https://github.com/byeol-lor)
- [Seongmin Cho](https://github.com/bluetic123)

Permission is hereby granted, free of charge, to any person obtaining a copy of this software and associated documentation files (the "Software"), to deal in the Software without restriction, including without limitation the rights to use, copy, modify, merge, publish, distribute, sublicense, and/or sell copies of the Software, and to permit persons to whom the Software is furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY, FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE SOFTWARE.