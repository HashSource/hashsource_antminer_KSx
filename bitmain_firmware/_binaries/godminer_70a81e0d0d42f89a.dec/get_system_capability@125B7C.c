void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_30D948, 0x124u);
  return result;
}
