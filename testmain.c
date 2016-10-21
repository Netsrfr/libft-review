// /* ************************************************************************** */
// /*                                                                            */
// /*                                                        :::      ::::::::   */
// /*   testmain.c                                         :+:      :+:    :+:   */
// /*                                                    +:+ +:+         +:+     */
// /*   By: jpfeffer <marvin@42.fr>                    +#+  +:+       +#+        */
// /*                                                +#+#+#+#+#+   +#+           */
// /*   Created: 2016/09/21 16:38:13 by jpfeffer          #+#    #+#             */
// /*   Updated: 2016/09/21 16:43:33 by jpfeffer         ###   ########.fr       */
// /*                                                                            */
// /* ************************************************************************** */
#include "libft.h"
#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <fcntl.h>
#include <string.h>

int main ()
{

	printf("\n***********************************\n");
	printf("\n             FT_MEMSET             \n");
	printf("\n***********************************\n");
	char memset_str[50] = "ABC abc 0123456789";
	char memset_str2[50] = "ABC abc 0123456789";

	ft_memset(memset_str, 'X', 0);
	printf("Testing ft_memset [size = 0] = %s\n", memset_str);
	memset(memset_str2, 'X', 0);
	printf("Compare memset    [size = 0] = %s\n\n", memset_str2);

	ft_memset(memset_str, 'X', 4);
	printf("Testing ft_memset [size = 4] = %s\n", memset_str);
	memset(memset_str2, 'X', 4);
	printf("Compare memset    [size = 4] = %s\n\n", memset_str2);



	printf("\n***********************************\n");
	printf("\n             FT_BZERO              \n");
	printf("\n***********************************\n");
	char bzero_s[18] = "ABC abc 0123456789";
	char bzero_s2[18] = "ABC abc 0123456789";
	int	bzero_i;

	bzero_i = -1;
	ft_bzero(bzero_s, 10);
	bzero(bzero_s2, 10);
	while ((bzero_i = bzero_i + 1) < 18)
	{
		if (bzero_s[bzero_i] == bzero_s2[bzero_i])
			printf("PASS\n");
		else
			printf("FAIL\n");
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_MEMCPY             \n");
	printf("\n***********************************\n");
	const char memcpy_src[50] = "ABC abc 0123456789";
	char memcpy_dest[50];
	const char memcpy_src2[50] = "ABC abc 0123456789";
	char memcpy_dest2[50];

	ft_memcpy(memcpy_dest, memcpy_src, strlen(memcpy_src)+1);
	printf("Testing ft_memcpy = %s\n", memcpy_dest);
	memcpy(memcpy_dest2, memcpy_src2, strlen(memcpy_src2)+1);
	printf("Compare memcpy    = %s\n\n", memcpy_dest2);



	printf("\n***********************************\n");
	printf("\n            FT_MEMCCPY             \n");
	printf("\n***********************************\n");
	const char memccpy_src[50] = "ABC abc 0123456789";
	char memccpy_dest[51];
	const char memccpy_src2[50] = "ABC abc 0123456789";
	char memccpy_dest2[51];

	ft_memccpy(memccpy_dest, memccpy_src, 'b', strlen(memccpy_src)+1);
	printf("Testing ft_memccpy = %s\n", memccpy_dest);
	memccpy(memccpy_dest2, memccpy_src2, 'b', strlen(memccpy_src2)+1);
	printf("Compare memccpy    = %s\n\n", memccpy_dest2);

	ft_memccpy(memccpy_dest, memccpy_src, 'X', strlen(memccpy_src)+1);
	printf("Testing ft_memccpy = %s\n", memccpy_dest);
	memccpy(memccpy_dest2, memccpy_src2, 'X', strlen(memccpy_src2)+1);
	printf("Compare memccpy    = %s\n\n", memccpy_dest2);


	printf("\n***********************************\n");
	printf("\n            FT_MEMMOVE             \n");
	printf("\n***********************************\n");
	char memmove_dst[] = "ABC abc 0123456789";
	char memmove_dst2[] = "ABC abc 0123456789";
	const char memmove_src[] = "XYZ xyz 9876543210";
	ft_memmove(memmove_dst, memmove_src, 0);
	printf("Testing ft_memmove = %s\n", memmove_dst);
	memmove(memmove_dst2, memmove_src, 0);
	printf("Compare memmove    = %s\n\n", memmove_dst2);

	ft_memmove(memmove_dst, memmove_src, 10);
	printf("Testing ft_memmove = %s\n", memmove_dst);
	memmove(memmove_dst2, memmove_src, 10);
	printf("Compare memmove    = %s\n\n", memmove_dst2);

	ft_memmove(memmove_dst, memmove_src, 18);
	printf("Testing ft_memmove = %s\n", memmove_dst);
	memmove(memmove_dst2, memmove_src, 18);
	printf("Compare memmove    = %s\n\n\n", memmove_dst2);



	printf("\n***********************************\n");
	printf("\n             FT_MEMCHR             \n");
	printf("\n***********************************\n");
	const char memchr_s[] = "ABC abc 0123456789";
	const char memchr_c = ' ';
	char *memchr_result;
	const char memchr_s2[] = "ABC abc 0123456789";
	const char memchr_c2 = ' ';
	char *memchr_result2;

	memchr_result = ft_memchr(memchr_s, memchr_c, strlen(memchr_s));
	printf("Testing ft_memchr = %s\n", memchr_result);
	memchr_result2 = memchr(memchr_s2, memchr_c2, strlen(memchr_s2));
	printf("Compare memchr    = %s\n", memchr_result2);
	printf("\n");



	printf("\n***********************************\n");
	printf("\n             FT_MEMCMP             \n");
	printf("\n***********************************\n");
	if (ft_memcmp("", "", 10) == memcmp("", "", 10))
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "ABC abc 0123456789", 0) == memcmp("ABC abc 0123456789", "ABC abc 0123456789", 0))
		printf("Test 2 = PASS\n");
	else
		printf("Test 2 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 0) == memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 0))
		printf("Test 3 = PASS\n");
	else
		printf("Test 3 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "ABC abc 0123456789", 10) == memcmp("ABC abc 0123456789", "ABC abc 0123456789", 10))
		printf("Test 4 = PASS\n");
	else
		printf("Test 4 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 10) == memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 10))
		printf("Test 5 = PASS\n");
	else
		printf("Test 5 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "ABC abc 0123456789", 100) == memcmp("ABC abc 0123456789", "ABC abc 0123456789", 100))
		printf("Test 6 = PASS\n");
	else
		printf("Test 6 = FAIL\n");
	if (ft_memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 100) == memcmp("ABC abc 0123456789", "XYZ xyz 9876543210", 100))
		printf("Test 7 = PASS\n\n\n");
	else
		printf("Test 7 = FAIL\n\n\n");





	printf("\n***********************************\n");
	printf("\n             FT_STRLEN             \n");
	printf("\n***********************************\n");
	int strlen_result;

	strlen_result = 0;
	strlen_result = ft_strlen("");
	printf ("Testing ft_strlen = %d\n", strlen_result);
	strlen_result = strlen("");
	printf ("Compare strlen    = %d\n\n", strlen_result);

	strlen_result = ft_strlen(" ");
	printf ("Testing ft_strlen = %d\n", strlen_result);
	strlen_result = strlen(" ");
	printf ("Compare strlen    = %d\n\n", strlen_result);

	strlen_result = ft_strlen("abc");
	printf ("Testing ft_strlen = %d\n", strlen_result);
	strlen_result = strlen("abc");
	printf ("Compare strlen    = %d\n\n", strlen_result);

	strlen_result = ft_strlen("123456");
	printf ("Testing ft_strlen = %d\n", strlen_result);
	strlen_result = strlen("123456");
	printf ("Compare strlen    = %d\n\n", strlen_result);	



	printf("\n***********************************\n");
	printf("\n             FT_STRDUP             \n");
	printf("\n***********************************\n");
	char *strdup_dest;
	char *strdup_dest2;

	strdup_dest = ft_strdup("");
	printf("Testing ft_strdup = %s\n", strdup_dest);
	strdup_dest2 = strdup("");
	printf("Compare strdup    = %s\n\n", strdup_dest2);
	strdup_dest = ft_strdup("ABC abc 0123456789");
	printf("Testing ft_strdup = %s\n", strdup_dest);
	strdup_dest2 = strdup("ABC abc 0123456789");
	printf("Compare strdup    = %s\n", strdup_dest2);



	printf("\n***********************************\n");
	printf("\n             FT_STRCPY             \n");
	printf("\n***********************************\n");
	char strcpy_src[50] = "ABC abc 0123456789";
	char strcpy_dest[50];
	char strcpy_src2[50] = "ABC abc 0123456789";
	char strcpy_dest2[50];


	ft_strcpy(strcpy_dest, strcpy_src);
	printf("Testing ft_strcpy = %s\n", strcpy_dest);
	strcpy(strcpy_dest2, strcpy_src2);
	printf("Compare strcpy    = %s\n\n", strcpy_dest2);



	printf("\n***********************************\n");
	printf("\n             FT_STRNCPY            \n");
	printf("\n***********************************\n");
	char strncpy_src[50] = "ABC abc 0123456789";
	char strncpy_dest[50] = "ZYXWVUTVSRQPONMLKJIHGFEDCBA";
	char strncpy_dest2[50] = "ZYXWVUTVSRQPONMLKJIHGFEDCBA";


	ft_strncpy(strncpy_dest, "", 0);
	printf("Testing ft_strncpy = %s\n", strncpy_dest);
	strncpy(strncpy_dest2, "", 0);
	printf("Compare strncpy    = %s\n\n", strncpy_dest2);

	ft_strncpy(strncpy_dest, "", 10);
	printf("Testing ft_strncpy = %s\n", strncpy_dest);
	strncpy(strncpy_dest2, "", 10);
	printf("Compare strncpy    = %s\n\n", strncpy_dest2);

	ft_strncpy(strncpy_dest, "ABC abc 0123456789", 10);
	printf("Testing ft_strncpy = %s\n", strncpy_dest);
	strncpy(strncpy_dest2, "ABC abc 0123456789", 10);
	printf("Compare strncpy    = %s\n\n", strncpy_dest2);
	
	ft_strncpy(strncpy_dest, "ABC abc 0123456789", 20);
	printf("Testing ft_strncpy = %s\n", strncpy_dest);
	strncpy(strncpy_dest2, "ABC abc 0123456789", 20);
	printf("Compare strncpy    = %s\n\n", strncpy_dest2);



	printf("\n***********************************\n");
	printf("\n             FT_STRCAT             \n");
	printf("\n***********************************\n");
	char strcat_s1[50] = "012";
	char strcat_s12[50] = "012";

	printf("Testing ft_strcat = %s\n", ft_strcat(strcat_s1, "345"));
	printf("Compare strcat    = %s\n\n", strcat(strcat_s12, "345"));

 	printf("Testing ft_strcat = %s\n", ft_strcat(strcat_s1, ""));
	printf("Compare strcat    = %s\n\n", strcat(strcat_s12, ""));

	printf("Testing ft_strcat = %s\n", ft_strcat(strcat_s1, "6789"));
	printf("Compare strcat    = %s\n\n\n", strcat(strcat_s12, "6789"));



	printf("\n***********************************\n");
	printf("\n             FT_STRNCAT            \n");
	printf("\n***********************************\n");
	char strncat_s1[50] = "012";
	char strncat_s12[50] = "012";

	printf("Testing ft_strncat = %s\n", ft_strncat(strncat_s1, "3456789", 0));
	printf("Compare strncat    = %s\n\n", strncat(strncat_s12, "3456789", 0));

	printf("Testing ft_strncat = %s\n", ft_strncat(strncat_s1, "3456789", 3));
	printf("Compare strncat    = %s\n\n", strncat(strncat_s12, "3456789", 3));

 	printf("Testing ft_strncat = %s\n", ft_strncat(strncat_s1, "", 2));
	printf("Compare strncat    = %s\n\n", strncat(strncat_s12, "", 2));

	printf("Testing ft_strncat = %s\n", ft_strncat(strncat_s1, "6789", 4));
	printf("Compare strncat    = %s\n\n\n", strncat(strncat_s12, "6789", 4));



	 printf("\n***********************************\n");
	 printf("\n            FT_STRLCAT             \n");
	 printf("\n***********************************\n");
	char strlcat_dst[16] = "012345";
	char strlcat_dst2[16] = "012345";
	const char strlcat_src[20] = "7890ABC\0 hidden";
	printf("        ft_strlcat %lu = %lu strlcat\n", ft_strlcat(strlcat_dst, strlcat_src, 6), strlcat(strlcat_dst2, strlcat_src, 6));
	printf("ft_strlcat |%s| = |%s| strlcat\n", strlcat_dst, strlcat_dst2);
	if (strcmp(strlcat_dst, strlcat_dst2) == 0)
		printf("                    PASS\n\n");
	else
		printf("                    FAIL\n\n");

	char strlcat_dst3[100] = "0123456";
	char strlcat_dst4[100] = "0123456";
	printf("        ft_strlcat %lu = %lu strlcat\n", ft_strlcat(strlcat_dst3, strlcat_src, 10), strlcat(strlcat_dst4, strlcat_src, 10));
	printf("ft_strlcat |%s| = |%s| strlcat\n", strlcat_dst3, strlcat_dst4);
	if (strcmp(strlcat_dst3, strlcat_dst4) == 0)
		printf("                    PASS\n\n");
	else
		printf("                    FAIL\n\n");;

	char strlcat_dst5[100] = "0123456";
	char strlcat_dst6[100] = "0123456";
	printf("        ft_strlcat %lu = %lu strlcat\n", ft_strlcat(strlcat_dst5, strlcat_src, 12), strlcat(strlcat_dst6, strlcat_src, 12));
	printf("ft_strlcat |%s| = |%s| strlcat\n", strlcat_dst5, strlcat_dst6);
	if (strcmp(strlcat_dst5, strlcat_dst6) == 0)
		printf("                    PASS\n\n");
	else
		printf("                    FAIL\n\n");

	 char strlcat_dst7[20] = {0};
	 char strlcat_dst8[20] = {0};
	 const char strlcat_src2[100] = "abc";
	 	printf("        ft_strlcat %lu = %lu strlcat\n", ft_strlcat(strlcat_dst7, strlcat_src2, 6), strlcat(strlcat_dst8, strlcat_src2, 6));
	 printf("ft_strlcat |%s| = |%s| strlcat\n", strlcat_dst7, strlcat_dst8);
	 if (strcmp(strlcat_dst7, strlcat_dst8) == 0)
	 	printf("                    PASS\n\n");
	 else
	 	printf("                    FAIL\n\n");


	 char strlcat_dst9[100] = "abc";
	 char strlcat_dst10[100] = "abc";
	 const char strlcat_src10[100] = "abcd";
	printf("%lu\n", sizeof(strlcat_dst10));
	 	printf("        ft_strlcat %lu = %lu strlcat\n", ft_strlcat(strlcat_dst9, strlcat_src10, 2), strlcat(strlcat_dst10, strlcat_src10, 2));
	 printf("ft_strlcat |%s| = |%s| strlcat\n", strlcat_dst9, strlcat_dst10);
	 if (strcmp(strlcat_dst9, strlcat_dst10) == 0)
	 	printf("                    PASS\n\n");
	 else
	 	printf("                    FAIL\n\n");




	printf("\n***********************************\n");
	printf("\n             FT_STRCHR             \n");
	printf("\n***********************************\n");
	char strchr_s[50] = "ABC abc 0123456789";
	char strchr_s2[50] = "ABC abc 0123456789";

	printf("Testing ft_strchr = %s\n", ft_strchr(strchr_s, 'z'));
	printf("Compare strchr    = %s\n\n", strchr(strchr_s2, 'z'));

	printf("Testing ft_strchr = %s\n", ft_strchr(strchr_s, '\0'));
	printf("Compare strchr    = %s\n\n", strchr(strchr_s2, '\0'));

	printf("Testing ft_strchr = %s\n", ft_strchr(strchr_s, '9'));
	printf("Compare strchr    = %s\n\n", strchr(strchr_s2, '9'));

	printf("Testing ft_strchr = %s\n", ft_strchr(strchr_s, '4'));
	printf("Compare strchr    = %s\n\n", strchr(strchr_s2, '4'));

	printf("Testing ft_strchr = %s\n", ft_strchr(strchr_s, ' '));
	printf("Compare strchr    = %s\n\n\n", strchr(strchr_s2, ' '));



	printf("\n***********************************\n");
	printf("\n             FT_STRRCHR            \n");
	printf("\n***********************************\n");
	char strrchr_s[50] = "ABC abc 01234567899876543210 cba CBA";
	char strrchr_s2[50] = "ABC abc 01234567899876543210 cba CBA";

	printf("Testing ft_strrchr = %s\n", ft_strrchr(strrchr_s, 'z'));
	printf("Compare strrchr    = %s\n\n", strrchr(strrchr_s2, 'z'));

	printf("Testing ft_strrchr = %s\n", ft_strrchr(strrchr_s, '\0'));
	printf("Compare strrchr    = %s\n\n", strrchr(strrchr_s2, '\0'));

	printf("Testing ft_strrchr = %s\n", ft_strrchr(strrchr_s, '9'));
	printf("Compare strrchr    = %s\n\n", strrchr(strrchr_s2, '9'));

	printf("Testing ft_strrchr = %s\n", ft_strrchr(strrchr_s, '4'));
	printf("Compare strrchr    = %s\n\n", strrchr(strrchr_s2, '4'));

	printf("Testing ft_strrchr = %s\n", ft_strrchr(strrchr_s, ' '));
	printf("Compare strrchr    = %s\n\n\n", strrchr(strrchr_s2, ' '));



	printf("\n***********************************\n");
	printf("\n             FT_STRSTR             \n");
	printf("\n***********************************\n");
	char strstr_s[50] = "ABC abc 01234567899876543210 cba CBA";
	char strstr_s2[50] = "ABC abc 01234567899876543210 cba CBA";
	char strstr_s3[50] = "J'ai fait pipapipapou en LV2";
	char strstr_s4[50] = "J'ai fait pipapipapou en LV2";



	printf("Testing ft_strstr = %s\n", ft_strstr(strstr_s3, "pipapou"));
	printf("Compare strstr    = %s\n\n", strstr(strstr_s4, "pipapou"));
	if (strcmp(ft_strstr(strstr_s3, "pipapou"), strstr(strstr_s4, "pipapou")) == 0 )
		printf("PASS\n");
	else
		printf("FAIL\n");

	printf("Testing ft_strstr = %s\n", ft_strstr(strstr_s, ""));
	printf("Compare strstr    = %s\n\n", strstr(strstr_s2, ""));

	printf("Testing ft_strstr = %s\n", ft_strstr(strstr_s, "123"));
	printf("Compare strstr    = %s\n\n", strstr(strstr_s2, "123"));

	printf("Testing ft_strstr = %s\n", ft_strstr(strstr_s, "xyz"));
	printf("Compare strstr    = %s\n\n", strstr(strstr_s2, "xyz"));

	printf("Testing ft_strstr = %s\n", ft_strstr("abc", "abcdef"));
	printf("Compare strstr    = %s\n\n", strstr("abc", "abcdef"));

	printf("Testing ft_strstr = %s\n", ft_strstr("0123456ABC123ABC1234END", "ABC1234"));
	printf("Compare strstr    = %s\n\n", strstr("0123456ABC123ABC1234END", "ABC1234"));

	printf("Testing ft_strstr = %s\n", ft_strstr("123", "123 More thn 123"));
	printf("Compare strstr    = %s\n\n", strstr("123", "123 More than 123"));

	printf("Testing ft_strstr = %s\n", ft_strstr("Hello les genw", "les"));
	printf("Compare strstr    = %s\n\n", strstr("Hello les genw", "les"));




	printf("\n***********************************\n");
	printf("\n             FT_STRNSTR            \n");
	printf("\n***********************************\n");
	char strnstr_s[50] = "ABC abc 01234567899876543210 cba CBA";
	char strnstr_s2[50] = "ABC abc 01234567899876543210 cba CBA";

	printf("Testing ft_strnstr = %s\n", ft_strnstr(strnstr_s, "", 0));
	printf("Compare strnstr    = %s\n\n", strnstr(strnstr_s2, "", 0));

	printf("Testing ft_strnstr = %s\n", ft_strnstr(strnstr_s, "123", 11));
	printf("Compare strnstr    = %s\n\n", strnstr(strnstr_s2, "123", 11));

	printf("Testing ft_strnstr = %s\n", ft_strnstr(strnstr_s, "123", 12));
	printf("Compare strnstr    = %s\n\n", strnstr(strnstr_s2, "123", 12));

	printf("Testing ft_strnstr = %s\n", ft_strnstr("abc", "abcdef", 2));
	printf("Compare strnstr    = %s\n\n", strnstr("abc", "abcdef", 2));

	printf("Testing ft_strnstr = %s\n", ft_strnstr("ABC123ABC123456", "ABC1234", 7));
	printf("Compare strnstr    = %s\n\n", strnstr("ABC123ABC123456", "ABC1234", 7));

	printf("Testing ft_strnstr = %s\n", ft_strnstr("ABC123ABC123456", "ABC1234", 13));
	printf("Compare strnstr    = %s\n\n", strnstr("ABC123ABC123456", "ABC1234", 13));

	printf("Testing ft_strnstr = %s\n", ft_strnstr("123", "123 More thn 123", 10));
	printf("Compare strnstr    = %s\n\n", strnstr("123", "123 More than 123", 10));



	printf("\n***********************************\n");
	printf("\n             FT_STRCMP             \n");
	printf("\n***********************************\n");
	char strcmp_s[50] = "ABC abc 01234567899876543210 cba CBA";
	char strcmp_s2[50] = "ABC abc 01234567899876543210 cba CBA";

	if (ft_strcmp("", "") == strcmp("", ""))
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");
	if (ft_strcmp("123", "123") == strcmp("123", "123"))
		printf("Test 2 = PASS\n");
	else
		printf("Test 2 = FAIL\n");
	if (ft_strcmp("abcxyz", "xyzabc") == strcmp("abcxyz", "xyzabc"))
		printf("Test 3 = PASS\n");
	else
		printf("Test 3 = FAIL\n");
	if (ft_strcmp("abc", "abcdef") == strcmp("abc", "abcdef"))
		printf("Test 4 = PASS\n");
	else
		printf("Test 4 = FAIL\n");
	if (ft_strcmp("ABC123ABC123456", "ABC1234") == strcmp("ABC123ABC123456", "ABC1234"))
		printf("Test 5 = PASS\n");
	else
		printf("Test 5 = FAIL\n");
	if (ft_strcmp("123", "123 More thn 123") == strcmp("123", "123 More thn 123"))
		printf("Test 6 = PASS\n\n\n");
	else
		printf("Test 6 = FAIL\n\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_STRNCMP            \n");
	printf("\n***********************************\n");
	char strncmp_s[50] = "ABC abc 012934567899876543210 cba CBA";
	char strncmp_s2[50] = "ABC abc 01234567899876543210 cba CBA";

	if (ft_strncmp("hello different", "hello same", 6) == strncmp("hello different", "hello same", 6))
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");
	if (ft_strncmp("hello different", "hello same", 5) == strncmp("hello different", "hello same", 5))
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");
	if (ft_strncmp("123", "123", 3) == strncmp("123", "123", 3))
		printf("Test 2 = PASS\n");
	else
		printf("Test 2 = FAIL\n");
	if (ft_strncmp("aacxyz", "xyzabc", 6) == strncmp("aacxyz", "xyzabc", 6))
		printf("Test 3 = PASS\n");
	else
		printf("Test 3 = FAIL\n");
	if (ft_strncmp("abc", "abcdef", 0) == strncmp("abc", "abcdef", 0))
		printf("Test 4 = PASS\n");
	else
		printf("Test 4 = FAIL\n");
		if (ft_strncmp("abc", "abcdef", 6) == strncmp("abc", "abcdef", 6))
		printf("Test 5 = PASS\n");
	else
		printf("Test 5 = FAIL\n");
	if (ft_strncmp("ABC123ABC123456", "ABC1234", 7) == strncmp("ABC123ABC123456", "ABC1234", 7))
		printf("Test 6 = PASS\n");
	else
		printf("Test 6 = FAIL\n");
	if (ft_strncmp("123", "123 More thn 123", 0) == strncmp("123", "123 More thn 123", 0))
		printf("Test 7 = PASS\n\n\n");
	else
		printf("Test 7 = FAIL\n\n\n");



	printf("\n***********************************\n");
	printf("\n              FT_ATOI              \n");
	printf("\n***********************************\n");
	int atoi_result;

	atoi_result = ft_atoi("");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("123456");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("123456");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("   	123456");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("   	123456");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("-42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("-42");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("--42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("--42");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("+-42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("+-42");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("-+42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("-+42");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("abc42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("abc42");
	printf ("Compare atoi    = %d\n\n", atoi_result);

	atoi_result = ft_atoi("42abc42");
	printf ("Testing ft_atoi = %d\n", atoi_result);
	atoi_result = atoi("42abc42");
	printf ("Compare atoi    = %d\n\n", atoi_result);



	printf("\n***********************************\n");
	printf("\n            FT_ISALPHA             \n");
	printf("\n***********************************\n");
	int	isalpha_i;
	char isalpha_str[50] = "ABC123xyz #\n";

	isalpha_i = -1;
	while ((isalpha_i = isalpha_i + 1) < strlen(isalpha_str))
	{
		if (ft_isalpha(isalpha_str[isalpha_i]) == isalpha(isalpha_str[isalpha_i]))
			printf("Test %d = PASS\n", (isalpha_i + 1));
		else
			printf("Test %d = FAIL\n", (isalpha_i + 1));
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n            FT_ISDIGIT             \n");
	printf("\n***********************************\n");
	int	isdigit_i;
	char isdigit_str[50] = "ABC123xyz #\n";

	isdigit_i = -1;
	while ((isdigit_i = isdigit_i + 1) < strlen(isdigit_str))
	{
		if (ft_isdigit(isdigit_str[isdigit_i]) == isdigit(isdigit_str[isdigit_i]))
			printf("Test %d = PASS\n", (isdigit_i + 1));
		else
			printf("Test %d = FAIL\n", (isdigit_i + 1));
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n            FT_ISALNUM             \n");
	printf("\n***********************************\n");
	int	isalnum_i;
	char isalnum_str[50] = "ABC123xyz #\n";

	isalnum_i = -1;
	while ((isalnum_i = isalnum_i + 1) < strlen(isalnum_str))
	{
		if (ft_isalnum(isalnum_str[isalnum_i]) == isalnum(isalnum_str[isalnum_i]))
			printf("Test %d = PASS\n", (isalnum_i + 1));
		else
			printf("Test %d = FAIL\n", (isalnum_i + 1));
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n            FT_ISASCII             \n");
	printf("\n***********************************\n");
	int	isascii_i;
	char isascii_str[50] = "ABC123xyz #\n";

	isascii_i = -1;
	while ((isascii_i = isascii_i + 1) < strlen(isascii_str))
	{
		if (ft_isascii(isascii_str[isascii_i]) == isascii(isascii_str[isascii_i]))
			printf("Test %d = PASS\n", (isascii_i + 1));
		else
			printf("Test %d = FAIL\n", (isascii_i + 1));
	}
	printf("\n\n");

	printf("\n***********************************\n");
	printf("\n            FT_ISPRINT             \n");
	printf("\n***********************************\n");
	int	isprint_i;
	char isprint_str[50] = "ABC123 #¿\t\n";

	isprint_i = -1;
	while ((isprint_i = isprint_i + 1) < strlen(isprint_str))
	{
		if (ft_isprint(isprint_str[isprint_i]) == isprint(isprint_str[isprint_i]))
			printf("Test %d = PASS\n", (isprint_i + 1));
		else
			printf("Test %d = FAIL\n", (isprint_i + 1));
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_TOUPPER            \n");
	printf("\n***********************************\n");
	char toupper_str[50] = "aBc 1!¿";
	int toupper_i;

	toupper_i = -1;
	while ((toupper_i = toupper_i + 1) < strlen(toupper_str))
	{
	printf("Testing ft_toupper = %c\n", ft_toupper(toupper_str[toupper_i]));
	printf("Compare toupper    = %c\n\n", toupper(toupper_str[toupper_i]));
	}
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_TOLOWER            \n");
	printf("\n***********************************\n");
	char tolower_str[50] = "aBc 1!¿";
	int tolower_i;

	tolower_i = -1;
	while ((tolower_i = tolower_i + 1) < strlen(tolower_str))
	{
	printf("Testing ft_tolower = %c\n", ft_tolower(tolower_str[tolower_i]));
	printf("Compare tolower    = %c\n\n", tolower(tolower_str[tolower_i]));
	}
	printf("\n\n");	



	printf("\n***********************************\n");
	printf("\n             FT_STRCLR             \n");
	printf("\n***********************************\n");
	char strclr_s[50] = "ABC abc 01234567899876543210 cba CBA";
	printf("String before clear = %s\n", strclr_s);
	ft_strclr(strclr_s);
	printf("String after clear  = %s\n\n\n", strclr_s);




	printf("\n***********************************\n");
	printf("\n             FT_STREQU             \n");
	printf("\n***********************************\n");
	
	if (ft_strequ("abc", "abc") == 1)
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");
	if (ft_strequ("", "") == 1)
		printf("Test 2 = PASS\n");
	else
		printf("Test 2 = FAIL\n");
	if (ft_strequ("abc", "abcd") != 1)
		printf("Test 3 = PASS\n");
	else
		printf("Test 3 = FAIL\n");
	if (ft_strequ("abcd", "abc") != 1)
		printf("Test 4 = PASS\n\n\n");
	else
		printf("Test 4 = FAIL\n\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_STRNEQU            \n");
	printf("\n***********************************\n");
	
	if (ft_strnequ("abc", "abc", 3) == 1)
		printf("Test 1 = PASS\n");
	else
		printf("Test 1 = FAIL\n");

	if (ft_strnequ("", "", 1) == 1)
		printf("Test 2 = PASS\n");
	else
		printf("Test 2 = FAIL\n");

	if (ft_strnequ("abcde", "abdfe", 2) == 1)
		printf("Test 3 = PASS\n");
	else
		printf("Test 3 = FAIL\n");

	if (ft_strnequ("abcd", "abc", 4) != 1)
		printf("Test 4 = PASS\n\n\n");
	else
		printf("Test 4 = FAIL\n\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_STRJOIN            \n");
	printf("\n***********************************\n");
	printf("       = %s\n", ft_strjoin("", ""));
	printf("   abc = %s\n", ft_strjoin("abc", ""));
	printf("   123 = %s\n", ft_strjoin("", "123"));
	printf("abc123 = %s\n\n\n", ft_strjoin("abc", "123"));



	printf("\n***********************************\n");
	printf("\n             FT_PUTCHAR            \n");
	printf("\n***********************************\n");
	ft_putchar(' ');
	ft_putchar(' ');
	ft_putchar(' ');
	ft_putchar('A');
	printf(" = A\n");

	ft_putchar('\n');
	printf("^ Newline ^\n");

	ft_putchar(' ');
	ft_putchar(' ');
	ft_putchar(' ');
	ft_putchar(66);
	printf(" = B\n");
	printf("\n\n\n");


	printf("\n***********************************\n");
	printf("\n             FT_PUTSTR             \n");
	printf("\n***********************************\n");
	ft_putstr("String");
	printf("\n\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_PUTENDL            \n");
	printf("\n***********************************\n");
	ft_putendl("Each result should be displayed on a new line");
	ft_putendl("Result1");
	ft_putendl("Result2");
	ft_putendl("Result3");
	printf("\n\n");



	printf("\n***********************************\n");
	printf("\n             FT_PUTNBR             \n");
	printf("\n***********************************\n");
	printf(" = 4136");
	ft_putnbr(4136);
	printf("\n");
	printf(" = -2147483648");
	ft_putnbr(-214783648);
	printf("\n");
	printf(" = 0");
	ft_putnbr(0);
	printf("\n");



	printf("\n***********************************\n");
	printf("\n             FT_STRTRIM            \n");
	printf("\n***********************************\n");
	if (strcmp(ft_strtrim("   ABCabc123456   \n\n\n"), "ABCabc123456") == 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (strcmp(ft_strtrim("   ABCabc123456   \n\n\n"), "XYZxyz123456") != 0)
		printf("PASS\n");
	else
		printf("FAIL\n");

	if (strcmp(ft_strtrim(""), "") == 0)
		printf("PASS\n\n\n");
	else
		printf("FAIL\n\n\n");



	printf("\n***********************************\n");
	printf("\n               FT_ITOA             \n");
	printf("\n***********************************\n");
	printf("          0 = %s\n", ft_itoa(0));
	printf("     -12345 = %s\n", ft_itoa(-12345));
	printf("-2147483648 = %s\n", ft_itoa(-2147483648));
	printf(" 2147483647 = %s\n\n\n", ft_itoa(2147483647));









	printf("\n***********************************\n");
	printf("\n            FT_STRSPLIT            \n");
	printf("\n***********************************\n");

	printf(" Test = %s\n", ft_strsplit("......Test.12.34.56.78.9", '.')[0]);
	printf("   12 = %s\n", ft_strsplit("......Test.12.34.56.78.9", '.')[1]);
	printf("   34 = %s\n", ft_strsplit("......Test.12.34.56.78.9", '.')[2]);
	printf("   56 = %s\n", ft_strsplit("......Test.12.34.56.78.9", '.')[3]);
	printf("   78 = %s\n", ft_strsplit("......Test.12.34.56.78.9", '.')[4]);
	printf("    9 = %s\n\n", ft_strsplit("......Test.12.34.56.78.9", '.')[5]);

	printf(" Test = %s\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[0]);
	printf("   12 = %s\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[1]);
	printf("   34 = %s\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[2]);
	printf("   56 = %s\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[3]);
	printf("   78 = %s\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[4]);
	printf("    9 = %s\n\n", ft_strsplit("      Test 12 34 56 78 9    ", ' ')[5]);

	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[0]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[1]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[2]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[3]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[4]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[5]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[6]);
	printf("    0 = %s\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[7]);
	printf("    0 = %s\n\n", ft_strsplit("0 0 0 0 0 0 0 0 0", ' ')[8]);


	return(0);
}


// 	// printf("\n***********************************\n");
// 	// printf("\n           TEST WORDCOUNT          \n");
// 	// printf("\n***********************************\n");
// 	// printf("%d\n", ft_wordcount("", '.'));
// 	// printf("%d\n", ft_wordcount("..........", '.'));
// 	// printf("%d\n", ft_wordcount("1.......", '.'));
// 	// printf("%d\n", ft_wordcount("....1....", '.'));
// 	// printf("%d\n", ft_wordcount("1.2....3..", '.'));
// 	// printf("%d\n", ft_wordcount("...1.2....3.4", '.'));
// 	// printf("%d\n", ft_wordcount("...1.2....3.4..5...", '.'));

// // *** FT_MEMSET ***
// // int main(void)
// // {
// // 	char *newstr;
// // 	char str[] = "Test123";
// // 	newstr = *ft_memset(str, 'z', 3);
// // }

// // *** FT_STRLEN ***
// // int main(void)
// // {
// // 	int result;

// // 	result = 0;
// // 	result = ft_strlen("");
// // 	printf ("%d", result);
// // 	result = ft_strlen(" ");
// // 	printf ("%d", result);
// // 	result = ft_strlen("abc");
// // 	printf ("%d", result);
// // 	result = ft_strlen("123456");
// // 	printf ("%d", result);
// // return(0);
// // }

// //#define TEST(x) (write(1, x, 6))

// // //*** FT_ISALPHA ***
// // int	main(void)
// // {
// 	// ft_isalpha('1');
// // 	ft_isalpha(' ');
// // 	ft_isalpha('\n');
// // 	ft_isalpha('\t');
// 	// ft_isalpha('a');
// // 	ft_isalpha('A');
// // 	ft_isalpha('z');
// // 	ft_isalpha('Z');
// // 	return(0);
// // }

// // *** FT_ISALNUM ***
// // int	main(void)
// // {
// // 	if (ft_isdigit('9') != 0)
// // 		write (1, "isdigit works\n", 14);
// // 	else
// // 		write (1, "isdigit FAIL\n", 13);
// // 	if (ft_isalnum('1') != 0)
// // 		write (1, "1 is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum('2') != 0)
// // 		write (1, "2 is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum('3') != 0)
// // 		write (1, "3 is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum(' ') != 0)
// // 	write (1, "FAIL is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum('*') != 0)
// // 		write (1, "FAIL is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum('a') != 0)
// // 		write (1, "a is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	if (ft_isalnum('Z') != 0)
// // 		write (1, "Z is alphanumeric\n", 18);
// // 	else
// // 		write (1, "Test is not alphanumeric\n", 25);
// // 	return(0);
// // }

// // *** FT_TOUPPER ***
// // int	main(void)
// // {
// // 	char result;
// // 	char str[] = "123 ABC xyz"; 
// // 	int i = 0;
// // 	while (str[i])
// // 	{
// // 	if (ft_toupper(str[i]) != 0)
// // 	{
// // 		result = ft_toupper(str[i]);
// // 		write (1, &result, 1);
// // 	}
// // 	else
// // 		write (1, "Char is not lower\n", 18);
// // 	i++;
// // 	}
// // 	return(0);
// // }

// // *** FT_TOLOWER ***
// // int	main(void)
// // {
// // 	char result;
// // 	char str[] = "123 ABC xyz"; 
// // 	int i = 0;
// // 	while (str[i])
// // 	{
// // 	if (ft_tolower(str[i]) != 0)
// // 	{
// // 		result = ft_tolower(str[i]);
// // 		write (1, &result, 1);
// // 		write (1, "\n", 1);

// // 	}
// // 	else
// // 		write (1, "Char is not lower\n", 18);
// // 	i++;
// // 	}
// // 	return(0);
// // }

// // *** TESTMACRO ***
// // int main(void)
// // {
// // 	write(1, "test", 4);
// // 	TEST("123456");
// // 	return (0);
// // }

// // *** FT_ATOI ***
// // int	main(void)
// // {
// // 	int result;
// // 	char str[] = " 123456";
// // 	result = ft_atoi(str);
// // 	printf ("%d", result);
// // 	return (0);
// // }
