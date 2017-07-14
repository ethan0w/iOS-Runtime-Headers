/* Generated by RuntimeBrowser.
 */

@protocol UITable <UIEditable>

@required

- (UIColor *)_accessoryBaseColor;
- (float)_backgroundInset;
- (float)_bottomPadding;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })_indexFrame;
- (BOOL)_isShowingIndex;
- (float)_marginWidth;
- (int)_numberOfRowsInSection:(int)arg1;
- (int)_numberOfSections;
- (UIScrollView *)_scrollView;
- (float)_sectionBorderWidth;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })_sectionContentInset;
- (BOOL)_sectionContentInsetFollowsLayoutMargins;
- (float)_sectionCornerRadius;
- (BOOL)_shouldHaveFooterViewForSection:(int)arg1;
- (BOOL)_shouldHaveHeaderViewForSection:(int)arg1;
- (int)_style;
- (float)_topPadding;
- (BOOL)allowsMultipleSelection;
- (BOOL)allowsMultipleSelectionDuringEditing;
- (float)estimatedRowHeight;
- (float)estimatedSectionFooterHeight;
- (float)estimatedSectionHeaderHeight;
- (UIColor *)multiselectCheckmarkColor;
- (BOOL)overlapsSectionHeaderViews;
- (float)rowHeight;
- (float)sectionFooterHeight;
- (float)sectionHeaderHeight;
- (BOOL)usesVariableMargins;

@end
