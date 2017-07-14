/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@interface EMState : CMState {
    EDSheet * _currentSheet;
    NSMutableDictionary * _hyperlinks;
    EDWorkbook * _workbook;
}

@property EDSheet *currentSheet;
@property (retain) EDWorkbook *workbook;

- (id)currentSheet;
- (void)dealloc;
- (id)hyperlinkForRow:(unsigned int)arg1 column:(unsigned int)arg2;
- (void)setCurrentSheet:(id)arg1;
- (void)setHyperlink:(id)arg1 forRow:(unsigned int)arg2 column:(unsigned int)arg3;
- (void)setWorkbook:(id)arg1;
- (id)workbook;

@end
