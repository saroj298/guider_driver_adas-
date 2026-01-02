# Build (output) directory

This directory contains generated build output (CMake files, object files, binaries).

We do not track generated build artifacts in Git. To keep the `build/` folder visible in the repository without adding generated files, this directory contains:

- `.gitignore` — ignores all generated files inside `build/` but keeps this README and the `.gitignore` itself tracked.

If you need to add a specific generated artifact intentionally, first discuss. I generally keeped build outputs out of source control.

