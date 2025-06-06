# C Elements

## Known Issues with VSCode Microsoft C/C++ extension
- **bool**:
  - https://github.com/microsoft/vscode-cpptools/issues/10696#issuecomment-2652476603
  - https://github.com/microsoft/vscode-cpptools/discussions/11718#discussioncomment-7635890

## Solution
Remediated with clangd extension and `.clangd` and `.clang-format` files.

### vscode settings
```json
{
  "[c]": {
    "editor.defaultFormatter": "llvm-vs-code-extensions.vscode-clangd"
  },

  "clangd.path": "~/Library/Application Support/Code/User/globalStorage/llvm-vs-code-extensions.vscode-clangd/install/19.1.2/clangd_19.1.2/bin/clangd",
  "clangd.checkUpdates": true,

  "code-runner.executorMap": {
    "c": "cd $dir && gcc -std=c2x $fileName -o $fileNameWithoutExt && $dir$fileNameWithoutExt"
  },

  "files.associations": {
    ".clangd": "yaml",
    ".clang-format": "yaml"
  }
}
```