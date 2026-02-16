
# miniRT - A Simple Ray Tracer

**miniRT** is a simple Ray Tracer developed as part of the 42 school core curriculum. It renders 3D scenes described in a specific `.rt` format, supporting basic geometric primitives, lighting, and camera transformations.

## 🚀 Features

- **Geometric Primitives**: Support for Spheres, Planes, and Cylinders.
- **Lighting**:
  - Ambient lighting (intensity and color).
  - Diffuse lighting (point light sources).
  - Shadow handling for realistic object interactions.
- **Camera**: Adjustable field of view (FOV), position, and orientation.
- **Graphics Library**: Built using the [MLX42](https://github.com/codam-coding-college/MLX42) library for window management and pixel rendering.
- **Interactive window**:
  - Window resizing support.
  - Close window with `ESC` or the window close button.

## 🛠️ Installation

### Prerequisites

- **C Compiler** (gcc or cc)
- **CMake** (required for building MLX42)
- **GLFW library** (dependency for MLX42)
  - On macOS: `brew install glfw`
  - On Linux: `sudo apt-get install libglfw3-dev`

### Build

Clone the repository and its submodules (if any), then run `make`:

```bash
git clone https://github.com/Fiona-87327/42Core_miniRT.git
cd 42Core_miniRT
make
```

## 📖 Usage

To run the ray tracer, provide a path to a scene file with the `.rt` extension:

```bash
./miniRT scenes/simple_sphere.rt
```

### Controls
- **ESC**: Close the application.
- **Window Resize**: The image will automatically scale to the new window dimensions.

## 📝 Scene Format (.rt)

The scene file consists of several elements defined by their identifiers:

| ID | Name | Parameters |
| :--- | :--- | :--- |
| **A** | Ambient Light | `ratio [0.0, 1.0]`, `RGB [0, 255]` |
| **C** | Camera | `pos(x,y,z)`, `dir(x,y,z) [-1, 1]`, `FOV [0, 180]` |
| **L** | Light | `pos(x,y,z)`, `brightness [0.0, 1.0]`, `RGB [0, 255]` |
| **sp** | Sphere | `center(x,y,z)`, `diameter`, `RGB [0, 255]` |
| **pl** | Plane | `point(x,y,z)`, `normal(x,y,z) [-1, 1]`, `RGB [0, 255]` |
| **cy** | Cylinder | `center(x,y,z)`, `dir(x,y,z)`, `diameter`, `height`, `RGB [0, 255]` |

### Example Scene (`scene.rt`)
```text
A 0.2 255,255,255
C 0,0,20 0,0,-1 70
L -40,50,0 0.6 255,255,255
sp 0,0,0 10 255,0,0
pl 0,-5,0 0,1,0 255,255,255
```

## 📁 Project Structure

- `src/`: Source code including the ray engine, parser, and math utilities.
- `include/`: Header files.
- `libft/`: Custom C utility library.
- `MLX42/`: Graphics library submodule.
- `scenes/`: Example `.rt` files for testing.

---
