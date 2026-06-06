# Security Policy

## Supported Versions

Security fixes target the current default branch and the latest published release when the project has releases. Older versions may receive guidance, but fixes are normally made forward unless a practical backport is needed.

| Version | Supported |
| --- | --- |
| Current default branch | Yes |
| Latest release | Yes, when applicable |
| Older releases | Best effort |

## Reporting A Vulnerability

Do not post exploit details, crash payloads, private project code, credentials, device access details, or unsafe hardware instructions in a public issue.

Use GitHub's private vulnerability reporting flow from the repository Security tab when it is available. If that route is not available, open a minimal public issue saying only that you need to coordinate a security report, and wait for a maintainer response before sharing details.

Useful private report details include:

- Affected version or commit.
- Target board, compiler, Arduino core, and library versions.
- Minimal sketch or command sequence that demonstrates the issue.
- Whether the issue requires physical access, serial access, malicious input, or a hostile dependency.
- Expected impact and any known workaround.

## Scope

Security reports are most useful when they involve memory safety, unsafe generated code, build-time supply-chain risk, unsafe command execution, or behavior that could let untrusted input drive unintended hardware or software actions.

Hardware wiring mistakes, normal physical access limitations, and project-specific callback behavior are usually support or documentation issues unless they expose a project defect.
