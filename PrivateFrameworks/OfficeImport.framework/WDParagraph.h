/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray, WDParagraphProperties;

@interface WDParagraph : WDBlock  {
    WDParagraphProperties *mProperties;
    NSMutableArray *mRuns;
}


- (void)dealloc;
- (float)maxReflectionDistance;
- (id)addDateTime:(id)arg1;
- (id)addBookmark;
- (id)addFieldMarker:(int)arg1;
- (void)clearRuns;
- (void)removeRun:(id)arg1;
- (void)insertRun:(id)arg1 atIndex:(unsigned int)arg2;
- (id)initWithText:(id)arg1 string:(id)arg2;
- (void)clearProperties;
- (id)runIterator;
- (id)newRunIterator;
- (id)addFieldMarker;
- (id)addEndnote;
- (id)addFootnote;
- (id)addSymbol;
- (id)addSpecialCharacter;
- (void)addRun:(id)arg1;
- (id)addCharacterRun;
- (void)removeLastCharacter:(unsigned short)arg1;
- (id)addBookmark:(id)arg1 type:(int)arg2;
- (id)addAnnotation:(int)arg1;
- (id)runs;
- (BOOL)isContinuationOf:(id)arg1;
- (int)blockType;
- (id)runAt:(int)arg1;
- (int)runCount;
- (BOOL)isTextFrame;
- (id)initWithText:(id)arg1;
- (id)properties;
- (BOOL)isEmpty;

@end
