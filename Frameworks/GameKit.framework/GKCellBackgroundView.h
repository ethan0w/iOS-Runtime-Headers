/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/GameKit.framework/GameKit
 */

@class UIImage, NSArray, GKUITheme, NSMutableArray;

@interface GKCellBackgroundView : UIView  {
    GKUITheme *_theme;
    NSMutableArray *_backgroundDrawDescriptors;
    struct { 
        unsigned int drawSelected : 1; 
        unsigned int groupedTableViewStyle : 1; 
    } _gkViewFlags;
    int _backgroundStyle;
    struct CGSize { 
        float width; 
        float height; 
    } _fillImagePhase;
    UIImage *_fillImage;
    BOOL _ignoreFillPhaseYOffset;
    unsigned int _columnCount;
    int _selectedColumn;
    unsigned int _cellCount;
    float _cellGapWidth;
    int _selectedCell;
    struct UIEdgeInsets { 
        float top; 
        float left; 
        float bottom; 
        float right; 
    } _borderInsets;
}

@property(retain) GKUITheme * theme;
@property int backgroundStyle;
@property(retain) NSArray * backgroundDrawDescriptors;
@property struct CGSize { float x1; float x2; } fillImagePhase;
@property(retain) UIImage * fillImage;
@property BOOL ignoreFillPhaseYOffset;
@property BOOL grouped;
@property unsigned int columnCount;
@property int selectedColumn;
@property unsigned int cellCount;
@property float cellGapWidth;
@property int selectedCell;
@property BOOL drawSelected;
@property struct UIEdgeInsets { float x1; float x2; float x3; float x4; } borderInsets;

+ (id)selectedCellBackgroundWithTheme:(id)arg1;
+ (id)cellBackgroundWithTheme:(id)arg1;
+ (id)selectedButtonCellBackgroundWithTheme:(id)arg1;
+ (id)buttonCellBackgroundWithTheme:(id)arg1;
+ (id)selectedCellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;
+ (id)cellBackgroundWithTheme:(id)arg1 tableViewStyle:(int)arg2;

- (void)dealloc;
- (id)init;
- (void)setTheme:(id)arg1;
- (void)setFillImage:(id)arg1;
- (unsigned int)cellCount;
- (id)theme;
- (int)backgroundStyle;
- (void)setBackgroundStyle:(int)arg1;
- (void)setGrouped:(BOOL)arg1;
- (BOOL)grouped;
- (void)setColumnCount:(unsigned int)arg1;
- (unsigned int)columnCount;
- (int)sectionLocation;
- (void)setSectionLocation:(int)arg1 animated:(BOOL)arg2;
- (void)setBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)drawRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (int)selectedCell;
- (void)setCellGapWidth:(float)arg1;
- (int)selectedColumn;
- (id)backgroundDrawDescriptors;
- (void)setSectionLocations:(id)arg1;
- (void)setDrawSelected:(BOOL)arg1;
- (BOOL)drawSelected;
- (void)setFillImagePhase:(struct CGSize { float x1; float x2; })arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillRectForColumn:(unsigned int)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })rectForCell:(unsigned int)arg1 withBounds:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg2;
- (float)cellGapWidth;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })fillRectForCell:(unsigned int)arg1;
- (BOOL)shouldDrawBorderAtIndex:(int)arg1;
- (void)drawBorderInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellIndex:(int)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })borderRectForCell:(unsigned int)arg1;
- (void)drawFillInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)_drawBorderOutlineInRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 cellIndex:(int)arg2;
- (struct CGPath { }*)pathForRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1 withRoundedCorners:(int)arg2 cornerRadius:(float)arg3;
- (struct CGPath { }*)fillPathForColumn:(unsigned int)arg1;
- (struct CGPath { }*)fillPathForCell:(unsigned int)arg1;
- (id)fillImage;
- (BOOL)ignoreFillPhaseYOffset;
- (struct CGSize { float x1; float x2; })fillImagePhase;
- (void)setBackgroundDrawDescriptors:(id)arg1;
- (void)configureBorderImages;
- (BOOL)hasKnownLocations;
- (void)updateContentStretchForFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (id)drawDescriptorForCellIndex:(int)arg1;
- (void)setSelectedCell:(int)arg1;
- (void)setSelectedColumn:(int)arg1;
- (void)setCellCount:(unsigned int)arg1;
- (void)setBorderInsets:(struct UIEdgeInsets { float x1; float x2; float x3; float x4; })arg1;
- (struct UIEdgeInsets { float x1; float x2; float x3; float x4; })borderInsets;
- (void)setIgnoreFillPhaseYOffset:(BOOL)arg1;

@end
