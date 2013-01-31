/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class WDAContent, WDText, WDDocument;

@interface WDATextBox : NSObject  {
    WDText *mText;
    unsigned long mNextTextBoxId;
    boolmOle;
    WDDocument *mDocument;
    WDAContent *mParent;
}


- (void)dealloc;
- (id)init;
- (void)setNextTextBoxId:(unsigned long)arg1;
- (void)setDocument:(id)arg1;
- (BOOL)isOle;
- (void)setOle:(BOOL)arg1;
- (void)setParent:(id)arg1;
- (id)parent;
- (unsigned long)nextTextBoxId;
- (id)document;
- (id)text;
- (void)setText:(id)arg1;

@end
