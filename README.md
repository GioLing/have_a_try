`git clone` 之后，代码会保存在当前目录下的一个新文件夹中。具体路径规则如下：

## 默认情况
```bash
git clone https://github.com/username/repository.git
```
代码会被克隆到当前目录下的 `repository` 文件夹中。

## 完整路径示例
假设当前在 `/home/user/projects` 目录执行克隆：
```bash
/home/user/projects $ git clone https://github.com/username/repository.git
```
代码路径将是：
```
/home/user/projects/repository/
```

## 自定义路径
你可以指定克隆到特定目录：
```bash
# 克隆到指定目录名
git clone https://github.com/username/repository.git my-project

# 克隆到绝对路径
git clone https://github.com/username/repository.git /path/to/destination
```

## 查看当前路径
克隆完成后，可以使用以下命令查看或进入目录：

```bash
# 查看当前所在路径
pwd

# 进入克隆的仓库
cd repository/

# 或者使用绝对路径进入
cd /home/user/projects/repository/
```

## 快速进入的方法
```bash
# 克隆并直接进入
git clone https://github.com/username/repository.git && cd repository
```

**小提示**：在执行 `git clone` 之前，可以使用 `pwd` 命令查看当前工作目录，这样就能知道代码将被克隆到哪里。
