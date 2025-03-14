# C23 Issues with VSCode Microsoft C/C++ extension Intellisense

## Known Issues
- **bool**:
  - https://github.com/microsoft/vscode-cpptools/issues/10696#issuecomment-2652476603
  - https://github.com/microsoft/vscode-cpptools/discussions/11718#discussioncomment-7635890

## Solution
I remediated with clangd extension and `.clangd` and `.clang-format` files.

In `~/Library/Application Support/Code/User/settings.json`:

```json
{
  "[c]": {
    "editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
  },

  "C_Cpp.intelliSenseEngine": "disabled",
  "clangd.path": "/Users/gregorylarsen/Library/Application Support/Code/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/19.1.2/clangd_19.1.2/bin/clangd",
  "clangd.checkUpdates": true,

  "code-runner.executorMap": {
    "c": "cd $dir && gcc -std=c2x $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
  },

  "files.associations": {
    ".clangd": "yaml"
  }
}
```