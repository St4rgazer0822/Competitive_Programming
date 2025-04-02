# GitHub Collaboration Guide

## Table of Contents
1. [Setting Up the Repository](#setting-up-the-repository)
2. [Syncing Changes Across Devices](#syncing-changes-across-devices)
3. [Working with Branches](#working-with-branches)
4. [Troubleshooting](#troubleshooting)

---

## Setting Up the Repository

### 1. Initial Setup
```bash
# Clone the repository (use SSH)
git clone git@github.com:St4rgazer0822/Competitive_Programming.git
cd Competitive_Programming 

# Configure Git (do this once per device)
git config --global user.name "St4rgazer0822"
git config --global user.email "St4rgazer0822@gmail.com"
```

### 2. SSH Key Setup
1. Generate SSH key:
   ```bash
   ssh-keygen -t ed25519 -C "St4rgazer0822@gmail.com"
   ```
2. Add public key to GitHub:
   - Copy key: `cat ~/.ssh/id_ed25519.pub`
   - Paste at: [GitHub Settings > SSH and GPG Keys](https://github.com/settings/keys)

---

## Syncing Changes Across Devices

### Basic Workflow
```bash
# Always start with latest version
git pull origin main

# Make your changes, then:
git add .
git commit -m "Descriptive message"
git push origin main
```

### Resolving Conflicts
1. After `git pull`, edit conflicted files (look for `<<<<<<<` markers)
2. Keep desired changes, then:
   ```bash
   git add .
   git commit -m "Resolved conflict"
   git push origin main
   ```

---

## Working with Branches

### 1. Creating a New Branch
```bash
# Create and switch to new branch
git checkout -b feature/your-feature-name

# Push branch to GitHub
git push -u origin feature/your-feature-name
```

### 2. Merging to Main Branch
```bash
# Switch to main branch
git checkout main

# Merge your feature branch
git merge feature/your-feature-name

# Push updates
git push origin main
```

### 3. Deleting Old Branches
```bash
# Delete local branch
git branch -d feature/your-feature-name

# Delete remote branch
git push origin --delete feature/your-feature-name
```

---

## Troubleshooting

| Issue                   | Solution                                                                                                                                                                          |
| ----------------------- | --------------------------------------------------------------------------------------------------------------------------------------------------------------------------------- |
| Authentication failed   | [Switch to SSH](#2-ssh-key-setup) or use [Personal Access Token](https://docs.github.com/en/authentication/keeping-your-account-and-data-secure/creating-a-personal-access-token) |
| "Updates were rejected" | Run `git pull origin main` first                                                                                                                                                  |
| "Permission denied"     | Verify SSH key is added to GitHub                                                                                                                                                 |
| Changes not showing     | Refresh GitHub page or check correct branch                                                                                                                                       |

```