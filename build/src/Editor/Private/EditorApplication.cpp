#include <pch.h>
#include <Editor/EditorApplication.h>

CEditor::CEditor(TCHAR *CmdLine)
{
	System::Win64::Initialize();
	System::Dx12::Initialize();

	m_MainWindow = System::CWindow(1280, 720, STR("Editor"));

	while (!m_MainWindow.ShouldClose()) {
		System::CWindow::PumpEvents();
	}

	Shutdown();
}

void CEditor::Shutdown()
{
	System::Dx12::Shutdown();
	System::Win64::Shutdown();
}