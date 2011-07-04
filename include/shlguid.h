/*
 * Copyright (C) 1999 Juergen Schmied
 *
 * This library is free software; you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public
 * License as published by the Free Software Foundation; either
 * version 2.1 of the License, or (at your option) any later version.
 *
 * This library is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this library; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin St, Fifth Floor, Boston, MA 02110-1301, USA
 */

#ifndef __WINE_SHLGUID_H
#define __WINE_SHLGUID_H

DEFINE_OLEGUID(CLSID_ShellDesktop,      0x00021400L, 0, 0);

DEFINE_OLEGUID(CATID_BrowsableShellExt, 0x00021490L, 0, 0);
DEFINE_OLEGUID(CATID_BrowseInPlace,     0x00021491L, 0, 0);
DEFINE_OLEGUID(CATID_DeskBand,          0x00021492L, 0, 0);
DEFINE_OLEGUID(CATID_InfoBand,          0x00021493L, 0, 0);
DEFINE_OLEGUID(CATID_CommBand,          0x00021494L, 0, 0);

/* shell32 formatids */
DEFINE_OLEGUID(FMTID_Intshcut,          0x000214A0L, 0, 0);
DEFINE_OLEGUID(FMTID_InternetSite,      0x000214A1L, 0, 0);

/* command group ids */
DEFINE_OLEGUID(CGID_Explorer,           0x000214D0L, 0, 0);
DEFINE_OLEGUID(CGID_ShellDocView,       0x000214D1L, 0, 0);
DEFINE_OLEGUID(CGID_ShellServiceObject, 0x000214D2L, 0, 0);
DEFINE_OLEGUID(CGID_ExplorerBarDoc,     0x000214D3L, 0, 0);

DEFINE_OLEGUID(IID_IShellDetails,       0x000214ECL, 0, 0);
DEFINE_OLEGUID(IID_IDelayedRelease,     0x000214EDL, 0, 0);
DEFINE_OLEGUID(IID_IShellCopyHookA,     0x000214EFL, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerA,        0x000214F0L, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerSite,     0x000214F3L, 0, 0);
DEFINE_OLEGUID(IID_IPropSheetPage,      0x000214F6L, 0, 0);
DEFINE_OLEGUID(IID_IFileViewerW,        0x000214F8L, 0, 0);
DEFINE_OLEGUID(IID_IShellCopyHookW,     0x000214FCL, 0, 0);
DEFINE_OLEGUID(IID_IRemoteComputer,     0x000214FEL, 0, 0);
DEFINE_OLEGUID(IID_IQueryInfo,          0x00021500L, 0, 0);

DEFINE_GUID(IID_IACList,   0x77A130B0L,0x94FD,0x11D0,0xA5,0x44,0x00,0xC0,0x4F,0xD7,0xD0,0x62);
DEFINE_GUID(IID_IACList2,  0x470141A0L,0x5186,0x11D2,0xBB,0xB6,0x00,0x60,0x97,0x7B,0x46,0x4C);
DEFINE_GUID(IID_IObjMgr,   0x00BB2761L,0x6A77,0x11D0,0xA5,0x35,0x00,0xC0,0x4F,0xD7,0xD0,0x62);

DEFINE_GUID(IID_IProgressDialog, 0xEBBC7C04,0x315E,0x11D2,0xB6,0x2F,0x00,0x60,0x97,0xDF,0x5B,0xD4);


/* avoid duplicate definitions with shobjidl.h (FIXME) */
/* DEFINE_OLEGUID(IID_IShellPropSheetExt,  0x000214E9L, 0, 0); */
/* DEFINE_OLEGUID(IID_IExtractIconA,       0x000214EBL, 0, 0); */
/* DEFINE_OLEGUID(IID_IExtractIconW,       0x000214FAL, 0, 0); */
/* DEFINE_OLEGUID(IID_IContextMenu,        0x000214E4L, 0, 0); */
/* DEFINE_OLEGUID(IID_IContextMenu2,       0x000214F4L, 0, 0); */
/* DEFINE_OLEGUID(IID_ICommDlgBrowser,     0x000214F1L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellBrowser,       0x000214E2L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellView,          0x000214E3L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellFolder,        0x000214E6L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExtInit,       0x000214E8L, 0, 0); */
/* DEFINE_OLEGUID(IID_IPersistFolder,      0x000214EAL, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellLinkA,         0x000214EEL, 0, 0); */
/* DEFINE_OLEGUID(IID_IEnumIDList,         0x000214F2L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellLinkW,         0x000214F9L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExecuteHookA,  0x000214F5L, 0, 0); */
/* DEFINE_OLEGUID(IID_IShellExecuteHookW,  0x000214FBL, 0, 0); */
/* DEFINE_OLEGUID(IID_INewShortcutHookA,   0x000214E1L, 0, 0); */
/* DEFINE_OLEGUID(IID_INewShortcutHookW,   0x000214F7L, 0, 0); */

DEFINE_GUID(CLSID_CUrlHistory, 0x3c374a40, 0xbae4, 0x11cf, 0xbf, 0x7d, 0x00, 0xaa, 0x00, 0x69, 0x46, 0xee);
#define SID_SUrlHistory       CLSID_CUrlHistory

DEFINE_GUID(CLSID_CURLSearchHook, 0xcfbfae00, 0x17a6, 0x11d0, 0x99, 0xcb, 0x00, 0xc0, 0x4f, 0xd6, 0x44, 0x97);

DEFINE_GUID(SID_STopLevelBrowser, 0x4C96BE40, 0x915C, 0x11CF, 0x99, 0xD3, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);
DEFINE_GUID(SID_STopWindow,       0x49e1b500, 0x4636, 0x11d3, 0x97, 0xf7, 0x00, 0xc0, 0x4f, 0x45, 0xd0, 0xb3);
DEFINE_GUID(SID_SCommDlgBrowser,  0x80f30233, 0xb7df, 0x11d2, 0xa3, 0x3b, 0x00, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

#define SID_LinkSite          IID_IShellLinkW
#define SID_SShellBrowser     IID_IShellBrowser
#define SID_SShellDesktop     CLSID_ShellDesktop
#define SID_SInternetExplorer IID_IWebBrowserApp
#define SID_SWebBrowserApp    IID_IWebBrowserApp
#define SID_SWebBrowserEventsService    IID_IWebBrowserEventsService

#define IID_IFileViewer       WINELIB_NAME_AW(IID_IFileViewer)
#define IID_IShellLink        WINELIB_NAME_AW(IID_IShellLink)
#define IID_IExtractIcon      WINELIB_NAME_AW(IID_IExtractIcon)
#define IID_IShellCopyHook    WINELIB_NAME_AW(IID_IShellCopyHook)
#define IID_IShellExecuteHook WINELIB_NAME_AW(IID_IShellExecuteHook)
#define IID_INewShortcutHook  WINELIB_NAME_AW(IID_INewShortcutHook)

DEFINE_GUID(IID_IDockingWindowSite, 0x2A342FC2L, 0x7B26, 0x11D0, 0x8C, 0xA9, 0x00, 0xA0, 0xC9, 0x2D, 0xBF, 0xE8);
DEFINE_GUID(IID_IInputObject,       0x068284FAA, 0x6A48, 0x11D0, 0x8C, 0x78, 0x00, 0xC0, 0x4F, 0xD9, 0x18, 0xB4);
DEFINE_GUID(IID_IInputObjectSite,   0x0F1DB8392, 0x7331, 0x11D0, 0x8C, 0x99, 0x00, 0xA0, 0xC9, 0x2D, 0xBF, 0xE8);

/****************************************************************************
 * the next IID's are the namespace elements of the pidls
 */
DEFINE_GUID(CLSID_NetworkPlaces, 0x208D2C60, 0x3AEA, 0x1069, 0xA2, 0xD7, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_NetworkDomain, 0x46e06680, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_NetworkServer, 0xc0542a90, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_NetworkShare, 0x54a754c0, 0x4bf0, 0x11d1, 0x83, 0xee, 0x00, 0xa0, 0xc9, 0x0d, 0xc8, 0x49);
DEFINE_GUID(CLSID_MyComputer, 0x20D04FE0, 0x3AEA, 0x1069, 0xA2, 0xD8, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_Internet, 0x871C5380, 0x42A0, 0x1069, 0xA2, 0xEA, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_ShellFSFolder, 0xF3364BA0, 0x65B9, 0x11CE, 0xA9, 0xBA, 0x00, 0xAA, 0x00, 0x4A, 0xE8, 0x37);
DEFINE_GUID(CLSID_RecycleBin, 0x645FF040, 0x5081, 0x101B, 0x9F, 0x08, 0x00, 0xAA, 0x00, 0x2F, 0x95, 0x4E);
DEFINE_GUID(CLSID_ControlPanel, 0x21EC2020, 0x3AEA, 0x1069, 0xA2, 0xDD, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_Printers, 0x2227A280, 0x3AEA, 0x1069, 0xA2, 0xDE, 0x08, 0x00, 0x2B, 0x30, 0x30, 0x9D);
DEFINE_GUID(CLSID_MyDocuments, 0x450d8fba, 0xad25, 0x11d0, 0x98, 0xa8, 0x08, 0x00, 0x36, 0x1b, 0x11, 0x03);
DEFINE_GUID(CLSID_FolderShortcut, 0x0AFACED1, 0xE828, 0x11D1, 0x91, 0x87, 0xB5, 0x32, 0xF1, 0xE9, 0x57, 0x5D);

DEFINE_GUID(IID_IQueryAssociations, 0xc46ca590, 0x3c3f, 0x11d2, 0xbe, 0xe6, 0x00, 0x00, 0xf8, 0x05, 0xca, 0x57);

DEFINE_GUID(CLSID_QueryAssociations, 0xa07034fd, 0x6caa, 0x4954, 0xac, 0x3f, 0x97, 0xa2, 0x72, 0x16, 0xf9, 0x8a);

DEFINE_GUID(CLSID_DragDropHelper, 0x4657278a, 0x411b, 0x11d2, 0x83, 0x9a, 0x00, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);

DEFINE_GUID(CLSID_AutoComplete,   0x00bb2763, 0x6a77, 0x11d0, 0xa5, 0x35, 0x00, 0xc0, 0x4f, 0xd7, 0xd0, 0x62);
DEFINE_GUID(CLSID_ACLMulti,       0x00bb2765, 0x6a77, 0x11d0, 0xa5, 0x35, 0x00, 0xc0, 0x4f, 0xd7, 0xd0, 0x62);
DEFINE_GUID(CLSID_ACListISF,      0x03c036f1, 0xa186, 0x11d0, 0x82, 0x4a, 0x00, 0xaa, 0x00, 0x5b, 0x043, 0x83);

DEFINE_GUID(CLSID_ProgressDialog, 0xf8383852, 0xfcd3, 0x11d1, 0xa6, 0xb9, 0x0, 0x60, 0x97, 0xdf, 0x5b, 0xd4);

DEFINE_GUID(CLSID_ShellItem,      0x2fe352ea, 0xfd1f, 0x11d2, 0xb1, 0xf4, 0x00, 0xc0, 0x4f, 0x8e, 0xeb, 0x3e);

#define PSGUID_SHELLDETAILS     {0x28636aa6, 0x953d, 0x11d2, 0xb5, 0xd6, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0}
DEFINE_GUID(FMTID_ShellDetails,  0x28636aa6, 0x953d, 0x11d2, 0xb5, 0xd6, 0x0, 0xc0, 0x4f, 0xd9, 0x18, 0xd0);
#define PID_FINDDATA        0
#define PID_NETRESOURCE     1
#define PID_DESCRIPTIONID   2
#define PID_WHICHFOLDER     3
#define PID_NETWORKLOCATION 4
#define PID_COMPUTERNAME    5

/* Note: PSGUID_STORAGE defined in ntquery.h */
DEFINE_GUID(FMTID_Storage, 0xb725f130, 0x47ef, 0x101a, 0xa5, 0xf1, 0x02, 0x60, 0x8c, 0x9e, 0xeb, 0xac);
/* PID_* for FMTID_Storage defined in ntquery.h*/

#define PSGUID_DISPLACED    {0x9b174b33, 0x40ff, 0x11d2, 0xa2, 0x7e, 0x0, 0xc0, 0x4f, 0xc3, 0x8, 0x71}
DEFINE_GUID(FMTID_Displaced, 0x9b174b33, 0x40ff, 0x11d2, 0xa2, 0x7e, 0x0, 0xc0, 0x4f, 0xc3, 0x8, 0x71);
#define PID_DISPLACED_FROM 2
#define PID_DISPLACED_DATE 3

DEFINE_GUID(CLSID_CAnchorBrowsePropertyPage, 0x3050F3BB, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);
DEFINE_GUID(CLSID_CDocBrowsePropertyPage, 0x3050F3B4, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);
DEFINE_GUID(CLSID_CImageBrowsePropertyPage, 0x3050F3B3, 0x98B5, 0x11CF, 0xBB,0x82, 0x00,0xAA,0x00,0xBD,0xCE,0x0B);

DEFINE_GUID(VID_LargeIcons, 0x0057d0e0, 0x3573, 0x11cf, 0xae, 0x69, 0x08, 0x00, 0x2b, 0x2e, 0x12, 0x62);
DEFINE_GUID(VID_SmallIcons, 0x089000c0, 0x3573, 0x11cf, 0xae, 0x69, 0x08, 0x00, 0x2b, 0x2e, 0x12, 0x62);
DEFINE_GUID(VID_List,       0x0e1fa5e0, 0x3573, 0x11cf, 0xae, 0x69, 0x08, 0x00, 0x2b, 0x2e, 0x12, 0x62);
DEFINE_GUID(VID_Details,    0x137e7700, 0x3573, 0x11cf, 0xae, 0x69, 0x08, 0x00, 0x2b, 0x2e, 0x12, 0x62);
DEFINE_GUID(VID_Thumbnails, 0x8bebb290, 0x52d0, 0x11d0, 0xb7, 0xf4, 0x00, 0xc0, 0x4f, 0xd7, 0x06, 0xec);
DEFINE_GUID(VID_Tile,       0x65f125e5, 0x7be1, 0x4810, 0xba, 0x9d, 0xd2, 0x71, 0xc8, 0x43, 0x2c, 0xe3);
DEFINE_GUID(VID_ThumbStrip, 0x8eefa624, 0xd1e9, 0x445b, 0x94, 0xb7, 0x74, 0xfb, 0xce, 0x2e, 0xa1, 0x1a);

/* IExplorerBrowser */
DEFINE_GUID(EP_NavPane, 0xCB316B22, 0x25F7, 0x42B8, 0x8A, 0x09, 0x54, 0x0D, 0x23, 0xA4, 0x3C, 0x2F);
DEFINE_GUID(EP_Commands,0xD9745868, 0xCA5F, 0x4A76, 0x91, 0xCD, 0xF5, 0xA1, 0x29, 0xFB, 0xB0, 0x76);
DEFINE_GUID(EP_Commands_Organize, 0x72E81700, 0xE3EC, 0x4660, 0xBF, 0x24, 0x3C, 0x3B, 0x7B, 0x64, 0x88, 0x06);
DEFINE_GUID(EP_Commands_View, 0x21F7C32D, 0xEEAA, 0x439B, 0xBB, 0x51, 0x37, 0xB9, 0x6F, 0xD6, 0xA9, 0x43);
DEFINE_GUID(EP_DetailsPane, 0x43ABF98B, 0x89B8, 0x472D, 0xB9, 0xCE, 0xE6, 0x9B, 0x82, 0x29, 0xF0, 0x19);
DEFINE_GUID(EP_PreviewPane, 0x893C63D1, 0x45C8, 0x4D17, 0xBE, 0x19, 0x22, 0x3B, 0xE7, 0x1B, 0xE3, 0x65);
DEFINE_GUID(EP_QueryPane, 0x65BCDE4F, 0x4F07, 0x4F27, 0x83, 0xA7, 0x1A, 0xFC, 0xA4, 0xDF, 0x7D, 0xDD);
DEFINE_GUID(EP_AdvQueryPane, 0xB4E9DB8B, 0x34BA, 0x4C39, 0xB5, 0xCC, 0x16, 0xA1, 0xBD, 0x2C, 0x41, 0x1C);

/* IShellItem/IShellItemArray BindToHandler */
DEFINE_GUID(BHID_SFObject,    0x3981E224, 0xF559, 0x11D3, 0x8E,0x3A, 0x00,0xC0,0x4F,0x68,0x37,0xD5);
DEFINE_GUID(BHID_SFUIObject,  0x3981E225, 0xF559, 0x11D3, 0x8E,0x3A, 0x00,0xC0,0x4F,0x68,0x37,0xD5);
DEFINE_GUID(BHID_SFViewObject,0x3981E226, 0xF559, 0x11D3, 0x8E,0x3A, 0x00,0xC0,0x4F,0x68,0x37,0xD5);
DEFINE_GUID(BHID_Storage,     0x3981E227, 0xF559, 0x11D3, 0x8E,0x3A, 0x00,0xC0,0x4F,0x68,0x37,0xD5);
DEFINE_GUID(BHID_Stream,      0x1CEBB3AB, 0x7C10, 0x499A, 0xA4,0x17, 0x92,0xCA,0x16,0xC4,0xCB,0x83);
DEFINE_GUID(BHID_StorageEnum, 0x4621A4E3, 0xF0D6, 0x4773, 0x8A,0x9C, 0x46,0xE7,0x7B,0x17,0x48,0x40);
DEFINE_GUID(BHID_Transfer,    0xD5E346A1, 0xF753, 0x4932, 0xB4,0x03, 0x45,0x74,0x80,0x0E,0x24,0x98);
DEFINE_GUID(BHID_EnumItems,   0x94F60519, 0x2850, 0x4924, 0xAA,0x5A, 0xD1,0x5E,0x84,0x86,0x80,0x39);
DEFINE_GUID(BHID_DataObject,  0xB8C0BD9F, 0xED24, 0x455C, 0x83,0xE6, 0xD5,0x39,0x0C,0x4F,0xE8,0xC4);
DEFINE_GUID(BHID_Filter,      0x38D08778, 0xF557, 0x4690, 0x9E,0xBF, 0xBA,0x54,0x70,0x6A,0xD8,0xF7);
DEFINE_GUID(BHID_LinkTargetItem,   0x3981E228, 0xF559, 0x11D3, 0x8E,0x3A, 0x00,0xC0,0x4F,0x68,0x37,0xD5);
DEFINE_GUID(BHID_PropertyStore,    0x0384E1A4, 0x1523, 0x439C, 0xA4,0xC8, 0xAB,0x91,0x10,0x52,0xF5,0x86);
DEFINE_GUID(BHID_ThumbnailHandler, 0x7B2E650A, 0x8E20, 0x4F4A, 0xB0,0x9E, 0x65,0x97,0xAF,0xC7,0x2F,0xB0);
DEFINE_GUID(BHID_AssociationArray, 0xBEA9EF17, 0x82F1, 0x4F60, 0x92,0x84, 0x4F,0x8D,0xB7,0x5C,0x3B,0xE9);
DEFINE_GUID(BHID_EnumAssocHandlers,0xB8AB0B9C, 0xC2EC, 0x4F7A, 0x91,0x8D, 0x31,0x49,0x00,0xE6,0x28,0x0A);

#endif /* __WINE_SHLGUID_H */
