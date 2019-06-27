//---------------------------------------------------------------------------

#pragma hdrstop

#include "Unit3.h"
//---------------------------------------------------------------------------
#pragma package(smart_init)



TDocument::TDocument(TPageControl *APageControl): TTabSheet(APageControl)
	{
	PageControl = APageControl;
	Caption = "Nowy dokument";
	RichEdit = new TRichEdit(this);
	RichEdit->Parent = this;
	RichEdit->Align = alClient;
	RichEdit->ScrollBars = ssBoth;
	RichEdit->WordWrap = false;
	RichEdit->Color = clBlack;
    void __fastcall UpdateActivePage();
}

void TDocument::LoadFromFile(String AFileName)
	{
	FileName = AFileName;
	RichEdit->Lines->LoadFromFile(FileName);
	Caption = ExtractFileName(FileName);
	};

/* TDocument *TForm1:activeDocument() {
	 TTabSheet *s = PageControl1->ActivePage;
	 TDocument *d = dynamic_cast <TDocument*> (s);

	 return d;
 }  */
