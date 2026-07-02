# Contributing

Thanks for your interest in contributing! This project welcomes contributions from anyone in the community. Since it's a personal repository, we use the standard **fork + pull request** workflow — you don't need to be added as a collaborator to contribute.

## How to contribute

1. **Fork this repository**
   Click the "Fork" button at the top right of this page. This creates your own copy of the repo under your GitHub account.

2. **Clone your fork locally**
   ```bash
   git clone https://github.com/YOUR-USERNAME/REPO-NAME.git
   cd REPO-NAME
   ```

3. **Create a new branch**
   Use a descriptive name for what you're working on.
   ```bash
   git checkout -b feature/my-new-feature
   ```

4. **Make your changes**
   Work on your feature, fix, or improvement in your branch.

5. **Commit and push**
   ```bash
   git add .
   git commit -m "Add: short description of what you did"
   git push origin feature/my-new-feature
   ```

6. **Open a Pull Request**
   Go to your fork on GitHub, and you'll see a prompt to open a Pull Request against the `main` branch of this repository. Fill in a clear description of what your change does and why.

7. **Wait for review**
   The maintainer will review your PR, may request changes, and will merge it once it's approved. You'll get notified either way.

## Guidelines

- Keep pull requests focused — one feature or fix per PR is easier to review than a giant bundle of changes.
- Write a clear PR title and description explaining **what** changed and **why**.
- If your change is significant, consider opening an [Issue](../../issues) first to discuss it before doing the work — this avoids wasted effort if the idea doesn't fit the project's direction.
- Test your changes in-game before submitting, if applicable.
- Be respectful and patient during review — feedback is about the code, not about you.

## Keeping your fork up to date

Before starting new work, it's a good idea to sync your fork with the latest changes from `main`:

```bash
git remote add upstream https://github.com/ORIGINAL-OWNER/REPO-NAME.git
git fetch upstream
git checkout main
git merge upstream/main
git push origin main
```

## Questions?

If you're not sure where to start, or have an idea you'd like to discuss before building it, feel free to open an Issue or reach out on the Discord server first.

Thanks for helping improve the project!
