# GitActions-Learning
A professional demonstration of C project structure and GitHub Actions CI/CD.

## 🚀 Project Overview
This repository serves as a template for setting up a C-based project with automated testing via GitHub Actions.

## 🛠️ Build & Installation
The project uses a standard `Makefile` for compilation.

### Prerequisites
- GCC Compiler
- Make

### Building the project
```bash
make
```

### Running Tests
```bash
make test
```

## 🤖 CI/CD Pipeline
This project is configured with a GitHub Actions pipeline that automatically triggers on every `push` and `pull_request` to the `main` branch.
- **Build**: Compiles the source code and tests.
- **Test**: Executes the test suite to ensure stability.
