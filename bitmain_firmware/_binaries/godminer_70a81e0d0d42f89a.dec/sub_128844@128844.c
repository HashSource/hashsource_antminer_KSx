ssize_t sub_128844()
{
  ssize_t result; // r0
  char v1; // [sp+7h] [bp-5h] BYREF

  v1 = 48;
  result = write(dword_2E8F98, &v1, 1u);
  if ( result != 1 )
    return sub_1287AC();
  return result;
}
