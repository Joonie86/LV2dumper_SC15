
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; version 2 of the License.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307 USA
 */

#include <stdio.h>
#include <unistd.h>

#include <lv2_syscall.h>
#include <sys/file.h>
	
	
int main(int argc, char **argv)
{
	char *buf=malloc(8912896);
	int fd;
	sysLv2FsOpen("/dev_usb000/lv2.bin", SYS_O_WRONLY | SYS_O_CREAT | SYS_O_TRUNC, &fd, 0777, NULL, 0);
	memcpy_internal(buf, (void *)0x8000000000000000ULL, 8912896);
	u64 temp=0;
	sysLv2FsWrite(fd, buf, 8912896, &temp);

	return 0;
}
