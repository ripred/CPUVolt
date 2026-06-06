# Contributing

Thanks for helping improve this project. The best contributions are small, testable, and clear about the embedded constraint they address.

## Good First Places To Help

- Improve or correct documentation.
- Add focused examples or reduce confusing example code.
- Add tests or example coverage for Arduino library behavior.
- Improve compatibility across Arduino cores without adding hidden runtime cost.
- Keep example sketches buildable and practical to copy from.

## Before Opening An Issue

Search existing issues first. Include the target board, Arduino core, library versions, and the exact sketch, example, or generated output involved.

For bugs, a minimal sketch is usually better than a large project. Keep enough code to show setup, input, output, and any backing state needed to reproduce the issue.

## Pull Request Guidelines

- Keep changes scoped to one problem.
- Preserve Arduino IDE and Arduino CLI compatibility where applicable.
- Avoid adding heap allocation, Arduino `String`, or hidden global state to constrained embedded code unless the tradeoff is explicit.
- Put hardware-specific assumptions in examples, board notes, or generated setup code.
- Update docs or examples when behavior changes.

## Local Checks

Run the checks that match the files you changed. At minimum:

```sh
git diff --check
```

For Arduino library changes, also compile the relevant examples in the Arduino IDE or with Arduino CLI.

## Documentation Style

Use direct, practical language. Prefer concrete commands, code paths, board names, pin names, and observable behavior over broad claims. Keep example READMEs useful without turning them into long tutorials.
