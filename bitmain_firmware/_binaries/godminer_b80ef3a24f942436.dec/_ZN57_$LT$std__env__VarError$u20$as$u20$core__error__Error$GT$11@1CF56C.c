const char *__fastcall <std::env::VarError as core::error::Error>::description(int a1)
{
  const char *v1; // r2

  v1 = aEnvironmentVar_0;
  if ( *(_DWORD *)(a1 + 4) )
    return (const char *)&unk_2B0829;
  return v1;
}
