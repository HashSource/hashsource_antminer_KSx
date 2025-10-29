int __fastcall std::sys::unix::os::split_paths(int result, int a2, int a3)
{
  *(_DWORD *)(result + 16) = std::path::Path::to_path_buf;
  *(_BYTE *)(result + 12) = 0;
  *(_DWORD *)result = a2;
  *(_DWORD *)(result + 4) = a3;
  *(_DWORD *)(result + 8) = sub_1EE6FC;
  return result;
}
