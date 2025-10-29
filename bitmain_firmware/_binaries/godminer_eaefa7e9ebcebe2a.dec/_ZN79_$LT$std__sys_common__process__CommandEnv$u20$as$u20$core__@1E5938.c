int __fastcall <std::sys_common::process::CommandEnv as core::default::Default>::default(int result)
{
  *(_WORD *)(result + 12) = 0;
  *(_DWORD *)(result + 4) = 0;
  *(_DWORD *)(result + 8) = 0;
  return result;
}
