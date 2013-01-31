/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/QuickLook.framework/QuickLook
 */

@class RTFTextTable;

@interface RTFTextTableBlock : RTFTextBlock  {
    RTFTextTable *_table;
    int _rowNum;
    int _colNum;
    int _rowSpan;
    int _colSpan;
    void *_tableBlockPrimary;
    void *_tableBlockSecondary;
}


- (int)rowSpan;
- (void)_setColumnSpan:(int)arg1;
- (void)_setRowSpan:(int)arg1;
- (int)startingColumn;
- (id)initWithTable:(id)arg1 startingRow:(int)arg2 rowSpan:(int)arg3 startingColumn:(int)arg4 columnSpan:(int)arg5;
- (int)startingRow;
- (id)copyWithZone:(struct _NSZone { }*)arg1;
- (void)dealloc;
- (int)columnSpan;
- (id)table;

@end
