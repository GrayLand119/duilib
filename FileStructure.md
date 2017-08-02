# 主要目录结构

在使用 DuiLib时, 分别包含对应的库文件,源文件,头文件即可.

## bin

* /bin 					- dll 文件生成目录
* /bin/DuiLib_d.dll 	- Debug win32
* /bin/DuiLib.dll	 	- Release win32
* /bin/DuiLib_ud.dll	- Unicode Debug Win32
* /bin/DuiLib_u.dll		- Unicode Release Win32

## DuiLib

* /DuiLib					- 源文件目录
* /DuiLib/Control		- 控件源文件
* /DuiLib/Core			- 核心代码
* /DuiLib/Layout			- Layout 源文件
* /DuiLib/Utils			- 工具类

## lib

* /lib						- 库文件目录
* /lib/DuiLib_d.exp		- for Debug win32* /lib/DuiLib_d.lib* /lib/DuiLib_u.exp		- for Unicode Release win32* /lib/DuiLib_u.lib* /lib/DuiLib_ud.exp	- for Unicode Debug win32* /lib/DuiLib_ud.lib* /lib/DuiLib.exp		- for Release win32* /lib/DuiLib.lib