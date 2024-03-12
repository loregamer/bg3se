#if defined(ENABLE_UI)

BEGIN_ENUM_NS(Noesis, Orientation, NsOrientation, int32_t)
	E(Orientation_Horizontal)
	E(Orientation_Vertical)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, DragAction, NsDragAction, int32_t)
	E(DragAction_Continue)
	E(DragAction_Drop)
	E(DragAction_Cancel)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, HoldingState, NsHoldingState, int32_t)
	E(HoldingState_Started)
	E(HoldingState_Completed)
	E(HoldingState_Canceled)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, MouseButton, NsMouseButton, int32_t)
	E(MouseButton_Left)
	E(MouseButton_Right)
	E(MouseButton_Middle)
	E(MouseButton_XButton1)
	E(MouseButton_XButton2)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, MouseButtonState, NsMouseButtonState, int32_t)
	E(MouseButtonState_Released)
	E(MouseButtonState_Pressed)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, MouseAction, NsMouseAction, int32_t)
	E(MouseAction_None)
	E(MouseAction_LeftClick)
	E(MouseAction_RightClick)
	E(MouseAction_MiddleClick)
	E(MouseAction_WheelClick)
	E(MouseAction_LeftDoubleClick)
	E(MouseAction_RightDoubleClick)
	E(MouseAction_MiddleDoubleClick)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, Key, NsKey, int32_t)
	E(Key_None)

	E(Key_Cancel)
	E(Key_Back)
	E(Key_Tab)
	E(Key_LineFeed)
	E(Key_Clear)
	E(Key_Enter)
	E(Key_Pause)
	E(Key_CapsLock)

	E(Key_HangulMode)
	E(Key_JunjaMode)
	E(Key_FinalMode)
	E(Key_KanjiMode)

	E(Key_Escape)

	E(Key_ImeConvert)
	E(Key_ImeNonConvert)
	E(Key_ImeAccept)
	E(Key_ImeModeChange)

	E(Key_Space)

	E(Key_PageUp)
	E(Key_PageDown)
	E(Key_End)
	E(Key_Home)

	E(Key_Left)
	E(Key_Up)
	E(Key_Right)
	E(Key_Down)

	E(Key_Select)
	E(Key_Print)
	E(Key_Execute)
	E(Key_PrintScreen)
	E(Key_Insert)
	E(Key_Delete)
	E(Key_Help)

	E(Key_D0)
	E(Key_D1)
	E(Key_D2)
	E(Key_D3)
	E(Key_D4)
	E(Key_D5)
	E(Key_D6)
	E(Key_D7)
	E(Key_D8)
	E(Key_D9)

	E(Key_A)
	E(Key_B)
	E(Key_C)
	E(Key_D)
	E(Key_E)
	E(Key_F)
	E(Key_G)
	E(Key_H)
	E(Key_I)
	E(Key_J)
	E(Key_K)
	E(Key_L)
	E(Key_M)
	E(Key_N)
	E(Key_O)
	E(Key_P)
	E(Key_Q)
	E(Key_R)
	E(Key_S)
	E(Key_T)
	E(Key_U)
	E(Key_V)
	E(Key_W)
	E(Key_X)
	E(Key_Y)
	E(Key_Z)

	E(Key_LWin)
	E(Key_RWin)
	E(Key_Apps)
	E(Key_Sleep)

	E(Key_NumPad0)
	E(Key_NumPad1)
	E(Key_NumPad2)
	E(Key_NumPad3)
	E(Key_NumPad4)
	E(Key_NumPad5)
	E(Key_NumPad6)
	E(Key_NumPad7)
	E(Key_NumPad8)
	E(Key_NumPad9)

	E(Key_Multiply)
	E(Key_Add)
	E(Key_Separator)
	E(Key_Subtract)
	E(Key_Decimal)
	E(Key_Divide)

	E(Key_F1)
	E(Key_F2)
	E(Key_F3)
	E(Key_F4)
	E(Key_F5)
	E(Key_F6)
	E(Key_F7)
	E(Key_F8)
	E(Key_F9)
	E(Key_F10)
	E(Key_F11)
	E(Key_F12)
	E(Key_F13)
	E(Key_F14)
	E(Key_F15)
	E(Key_F16)
	E(Key_F17)
	E(Key_F18)
	E(Key_F19)
	E(Key_F20)
	E(Key_F21)
	E(Key_F22)
	E(Key_F23)
	E(Key_F24)

	E(Key_NumLock)
	E(Key_Scroll)

	E(Key_LeftShift)
	E(Key_RightShift)
	E(Key_LeftCtrl)
	E(Key_RightCtrl)
	E(Key_LeftAlt)
	E(Key_RightAlt)

	E(Key_BrowserBack)
	E(Key_BrowserForward)
	E(Key_BrowserRefresh)
	E(Key_BrowserStop)
	E(Key_BrowserSearch)
	E(Key_BrowserFavorites)
	E(Key_BrowserHome)

	E(Key_VolumeMute)
	E(Key_VolumeDown)
	E(Key_VolumeUp)

	E(Key_MediaNextTrack)
	E(Key_MediaPreviousTrack)
	E(Key_MediaStop)
	E(Key_MediaPlayPause)

	E(Key_LaunchMail)
	E(Key_SelectMedia)
	E(Key_LaunchApplication1)
	E(Key_LaunchApplication2)

	E(Key_OemSemicolon)
	E(Key_OemPlus)
	E(Key_OemComma)
	E(Key_OemMinus)
	E(Key_OemPeriod)
	E(Key_OemQuestion)
	E(Key_OemTilde)
	E(Key_AbntC1)
	E(Key_AbntC2)
	E(Key_OemOpenBrackets)
	E(Key_OemPipe)
	E(Key_OemCloseBrackets)
	E(Key_OemQuotes)
	E(Key_Oem8)
	E(Key_OemBackslash)
	E(Key_ImeProcessed)
	E(Key_System)
	E(Key_DbeAlphanumeric)
	E(Key_DbeKatakana)
	E(Key_DbeHiragana)
	E(Key_DbeSbcsChar)
	E(Key_DbeDbcsChar)
	E(Key_DbeRoman)
	E(Key_DbeNoRoman)
	E(Key_DbeEnterWordRegisterMode)
	E(Key_DbeEnterImeConfigureMode)
	E(Key_DbeFlushString)
	E(Key_DbeCodeInput)
	E(Key_DbeNoCodeInput)
	E(Key_DbeDetermineString)
	E(Key_DbeEnterDialogConversionMode)
	E(Key_OemClear)
	E(Key_DeadCharProcessed)

	E(Key_PageLeft)
	E(Key_PageRight)

	E(Key_GamepadLeft)
	E(Key_GamepadUp)
	E(Key_GamepadRight)
	E(Key_GamepadDown)
	E(Key_GamepadAccept)
	E(Key_GamepadCancel)
	E(Key_GamepadMenu)
	E(Key_GamepadView)
	E(Key_GamepadPageUp)
	E(Key_GamepadPageDown)
	E(Key_GamepadPageLeft)
	E(Key_GamepadPageRight)
	E(Key_GamepadContext1)
	E(Key_GamepadContext2)
	E(Key_GamepadContext3)
	E(Key_GamepadContext4)
END_ENUM_NS()

BEGIN_ENUM_NS(Noesis, KeyStates, NsKeyStates, int32_t)
	E(KeyStates_None)
	E(KeyStates_Down)
	E(KeyStates_Toggled)
END_ENUM_NS()

BEGIN_BITMASK_NS(Noesis, ModifierKeys, NsModifierKeys, int32_t)
	E(ModifierKeys_Alt)
	E(ModifierKeys_Control)
	E(ModifierKeys_Shift)
	E(ModifierKeys_Windows)
END_ENUM_NS()

BEGIN_BITMASK_NS(Noesis, ManipulationModes, NsManipulationModes, int32_t)
	E(ManipulationModes_TranslateX)
	E(ManipulationModes_TranslateY)
	E(ManipulationModes_Rotate)
	E(ManipulationModes_Scale)
END_ENUM_NS()

#endif