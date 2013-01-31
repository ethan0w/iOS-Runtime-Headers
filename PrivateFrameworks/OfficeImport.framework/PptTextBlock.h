/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

/* RuntimeBrowser encountered one or more ivar type encodings for a function pointer. 
   The runtime does not encode function signature information.  We use a signature of: 
           "int (*funcName)()",  where funcName might be null. 
 */

@class NSMutableArray, NSMutableString;

@interface PptTextBlock : NSObject  {
    struct PptTextHeaderAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; int x7; } *mTextHeader;
    NSMutableString *mText;
    struct PptTextBlockStylingAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptParaRun *> { struct PptParaRun {} **x_7_1_1; struct PptParaRun {} **x_7_1_2; unsigned int x_7_1_3; unsigned int x_7_1_4; unsigned int x_7_1_5; } x7; struct ChVector<PptCharRun *> { struct PptCharRun {} **x_8_1_1; struct PptCharRun {} **x_8_1_2; unsigned int x_8_1_3; unsigned int x_8_1_4; unsigned int x_8_1_5; } x8; unsigned int x9; } *mStyleText;
    NSMutableArray *mMetaCharacterFields;
    NSMutableArray *mBookmarks;
    NSMutableArray *mHyperlinks;
    struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; } *mTextRuler;
}


- (void)dealloc;
- (id)init;
- (id)bookmarks;
- (unsigned long)textIndex;
- (void)writeTextBlock:(id)arg1;
- (void)readMetaCharacterFieldsBookmarksAndHyperlinks:(id)arg1;
- (void)readStyles:(id)arg1;
- (void)readString:(id)arg1;
- (id)metaCharacterFields;
- (struct PptCharRun { int x1; struct PptCharProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 4; } x_2_1_1; unsigned int x_2_1_2 : 1; unsigned int x_2_1_3 : 1; unsigned int x_2_1_4 : 1; unsigned int x_2_1_5 : 1; unsigned int x_2_1_6 : 1; unsigned int x_2_1_7 : 1; unsigned int x_2_1_8 : 1; unsigned int x_2_1_9 : 1; unsigned int x_2_1_10 : 1; unsigned int x_2_1_11 : 1; unsigned int x_2_1_12 : 4; unsigned int x_2_1_13 : 1; unsigned short x_2_1_14; unsigned short x_2_1_15; unsigned short x_2_1_16; unsigned short x_2_1_17; unsigned short x_2_1_18; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_19_2_1; int x_19_2_2; } x_2_1_19; short x_2_1_20; } x2; }*)characterRunAtIndex:(int)arg1;
- (int)characterRunCount;
- (struct PptParaRun { int x1; short x2; struct PptParaProperty { struct { unsigned int x_1_2_1 : 1; unsigned int x_1_2_2 : 1; unsigned int x_1_2_3 : 1; unsigned int x_1_2_4 : 1; unsigned int x_1_2_5 : 1; unsigned int x_1_2_6 : 1; unsigned int x_1_2_7 : 1; unsigned int x_1_2_8 : 1; unsigned int x_1_2_9 : 1; unsigned int x_1_2_10 : 1; unsigned int x_1_2_11 : 1; unsigned int x_1_2_12 : 1; unsigned int x_1_2_13 : 1; unsigned int x_1_2_14 : 1; unsigned int x_1_2_15 : 1; unsigned int x_1_2_16 : 1; unsigned int x_1_2_17 : 1; unsigned int x_1_2_18 : 1; unsigned int x_1_2_19 : 1; unsigned int x_1_2_20 : 1; unsigned int x_1_2_21 : 1; } x_3_1_1; unsigned int x_3_1_2 : 1; unsigned int x_3_1_3 : 1; unsigned int x_3_1_4 : 1; unsigned int x_3_1_5 : 1; unsigned int x_3_1_6 : 1; unsigned int x_3_1_7 : 1; unsigned int x_3_1_8 : 1; unsigned int x_3_1_9 : 1; unsigned int x_3_1_10 : 4; unsigned int x_3_1_11 : 2; unsigned short x_3_1_12; unsigned short x_3_1_13; short x_3_1_14; struct PptColor { struct CsColour { unsigned short x_1_3_1; unsigned short x_1_3_2; unsigned short x_1_3_3; unsigned short x_1_3_4; } x_15_2_1; int x_15_2_2; } x_3_1_15; short x_3_1_16; short x_3_1_17; short x_3_1_18; short x_3_1_19; short x_3_1_20; short x_3_1_21; struct ChVector<PptTab> {} *x_3_1_22; } x3; }*)paragraphRunAtIndex:(int)arg1;
- (int)paragraphRunCount;
- (int)textType;
- (struct PptTextRulerAtom { int (**x1)(); unsigned short x2; struct EshHeader { int x_3_1_1; unsigned int x_3_1_2; short x_3_1_3; unsigned short x_3_1_4; unsigned char x_3_1_5; } x3; int (**x4)(); int x5; boolx6; struct ChVector<PptTab> {} *x7; unsigned short x8[5]; unsigned short x9[5]; unsigned short x10; }*)textRuler;
- (void)readTextBlock:(id)arg1;
- (id)hyperlinks;
- (id)text;

@end
