# Leetcode_play
About one month crash course

2025.3.3
1.关于git（github和自己的电脑之间如何通信）
  ssh步骤：生成 SSH Key（ssh-keygen -t rsa -b 4096 -C "jinyuzhang95@gmail.com"）
          把 SSH Key 添加到 GitHub（用cat ~/.ssh/id_rsa.pub查看 并复制到GitHub的 SSH and GPG keys）
          本地配置 SSH 让它使用这个 Key（nano ~/.ssh/config 打开并Host github.com HostName github.com User git IdentityFile ~/.ssh/id_rsa IdentitiesOnly yes）
          测试 SSH 连接（ssh -T git@github.com）
  克隆仓库：git clone git@github.com:your-github-username/your-repo.git
  推送代码到 GitHub（在你本地的项目中，可以先初始化 Git 仓库（如果没有的话））：git init git remote add origin git@github.com:your-github-username/your-repo.git
  推送代码：git add . git commit -m "Initial commit" git push -u origin main
  GitHub 可以同时支持多个 SSH 密钥，只需确保每个密钥都正确地配置到 GitHub，并在本地的 ~/.ssh/config 文件中进行区分。这使得你可以灵活管理不同的密钥用于不同的用途或设备。
  Git 中的本地分支和 GitHub 上的远程分支是关联的，但需要一些步骤来推送和同步它们
  在 Git 中，本地上传到远程 GitHub 仓库的过程通常分为几个步骤：添加、提交 和 推送。这三个步骤帮助你将本地的更改上传到 GitHub。
  添加（git add）：git add <file> git add .（所有）当你对代码进行了修改（比如编辑了文件、添加了新文件），这些修改还没有被 Git 跟踪。你需要先将它们添加到暂存区。使用 git add 来做这件事
  提交（git commit）：添加到暂存区后，接下来需要提交更改。提交是将暂存区的内容记录到本地仓库中，形成一个快照，并且给它一个描述：git commit -m "描述你的更改"
  推送（git push）：当你提交了本地更改后，接下来需要将这些更改推送到 GitHub 上的远程仓库。使用 git push git push origin <branch-name>
