#define MIN 0
#define MAJ 240

static dev_t chartest;
static struct cdev *cdev;
//打开文件函数
static int 
open_chartest(struct inode *inode, struct file *fp)
{
	printk(KERN_NOTICE"open\n");
	
	return 0;
}
//关闭文件函数
static int 
release_chartest(struct inode *inode, struct file *fp)
{
	printk(KERN_NOTICE"release\n");
	return 0;
	
}
//读函数
static ssize_t 
read_chartest (struct file *fp, char __user *ubuf, size_t count, loff_t *ppos)
{
	printk(KERN_NOTICE"read\n");
	return 0;
}
//写函数
static ssize_t 
write_chartest (struct file *fp, const char __user *ubuf, size_t count, loff_t *ppos)
{	
	printk(KERN_NOTICE"write\n");
	return 0;
}
static struct file_operations fops = {
	.owner = THIS_MODULE,
	.open = open_chartest,
	.release = release_chartest,
	.read = read_chartest,
	.write = write_chartest,
}

static int chartest_init(void)
{
	
}
static void chartest_exit(void)
{
	
}


module_init(chartest_init);
module_exit(chartest_exit);
MODULE_LICENCE("GPL")
MODULE_AUTHOR("haosou");
MODULE_VERSION("1.0.0")
MODULE_DESCRIPTION("ssssssssssssss");
