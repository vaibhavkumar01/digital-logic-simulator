Q. What should the project be called?
```Ans. DigitalLogicSimulator```

Q. What executable should it produce?
```Ans. Produce an executable named DigitalLogicSimulator. ```

Q. Which C++ standard should it use?
```Ans. C++17```

Q. Where should source files live?
```Ans. src folder```

Q. Where should header files live?
```Ans. include folder```

Q. Why should we keep build files out of the source directory?
`Ans. Build directories contain:
object files,
executables,
compiler cache,
generated files. 
These can always be regenerated.
Keeping them out of the repository gives us:
Cleaner Git history,
Smaller repository,
Fewer merge conflicts,
Easier cleanup,
Support for multiple build configurations.`

Q. Why shouldn't we simply compile everything manually with one huge g++ command?
`Ans.Manually compiling with a single g++ command doesn't scale well as a project grows. A build system like CMake automates dependency management, supports incremental builds, simplifies cross-platform development, and provides a maintainable way to manage source files, compiler options, libraries, and build configurations. It allows developers to describe the project once while CMake generates the appropriate build files for the chosen compiler and platform.`

Q. Why do you think cmake_minimum_required(VERSION 3.20) is the very first line in almost every CMake project?
`Ans. cmake_minimum_required(VERSION 3.20) tells CMake the oldest version that can correctly configure this project. It ensures that all commands and features used later in the file are supported and causes CMake to fail early with a clear error if an older version is used.`

Q. Why does CMake need a project name? `Ans. The project name gives the build system a unique identity for the software. It is used internally by CMake and externally by IDEs, packaging tools, and generated build files.`

Q. Why specifythe language? `Ans. It's because different programming languages require different compilers, toolchains, and build rules.`

Q. What problems would arise if we didn't tell it these things? `Ans. `

Q. What is the executable called? `Ans. DigitalLogicSimulator.exe`

Q. Which source files belong to it?`Ans. The executable should be built from the source (.cpp) files that implement the application. Header files provide declarations and are included during compilation, but they are not compiled as separate translation units.`

Q. If you later add Gate.cpp and Circuit.cpp, should you have to rewrite the entire build system or simply tell CMake about the new source files?`Ans. No, Because a build system should be: Extensible, Maintainable, Easy to update`