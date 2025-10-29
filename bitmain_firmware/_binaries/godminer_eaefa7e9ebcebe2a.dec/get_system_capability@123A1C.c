void *__fastcall get_system_capability(void *result)
{
  if ( result )
    return memcpy(result, &dword_3075E0, 0x124u);
  return result;
}
