/* Generated by RuntimeBrowser.
   Image: /System/Library/Frameworks/UIKit.framework/UIKit
 */

@class UIImageView, NSArray, NSString, UIScrollView, <UIKeyboardCandidateListDelegate>, NSMutableArray;

@interface UIKeyboardCandidateBar : UIView <UIKeyboardCandidateList, UIKeyboardCandidateListDelegate> {
    <UIKeyboardCandidateListDelegate> *m_delegate;
    UIScrollView *m_scrollView;
    NSArray *m_candidates;
    NSArray *m_allCandidates;
    NSString *m_inlineText;
    NSMutableArray *m_cells;
    unsigned int m_currentCandidateIndex;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    } m_inlineRect;
    float m_maxX;
    UIImageView *m_candidateMaskView;
    BOOL m_canExtend;
}

@property BOOL canExtend;
@property(retain) NSArray * candidates;
@property(readonly) NSString * inlineText;
@property unsigned int selectedCandidateIndex;
@property(readonly) UIScrollView * scrollView;
@property(readonly) UIImageView * candidateMaskView;

+ (float)defaultCandidateWidth;
+ (float)candidateBarHeight;

- (id)candidates;
- (void)dealloc;
- (unsigned int)count;
- (id)candidateMaskView;
- (struct CGSize { float x1; float x2; })screenSpaceBetweenStatusBarAndKeyboard;
- (void)setSelectedCandidateIndex:(unsigned int)arg1;
- (unsigned int)selectedCandidateIndex;
- (BOOL)canExtend;
- (void)setCanExtend:(BOOL)arg1;
- (BOOL)_addCells:(int)arg1;
- (float)_selectCandidateClosestToPageOffset:(float)arg1 withForwardPagingDirection:(BOOL)arg2;
- (void)_setCurrentCandidateIndex:(unsigned int)arg1;
- (void)_forceLayoutTo:(unsigned int)arg1;
- (void)layoutCells;
- (void)_bgAddCells:(id)arg1;
- (void)_clearCells;
- (void)_clearAll;
- (void)_cellSelected:(id)arg1;
- (id)inlineText;
- (id)scrollView;
- (BOOL)hasPreviousPage;
- (BOOL)hasNextPage;
- (void)configureKeyboard:(id)arg1;
- (id)candidateAtIndex:(unsigned int)arg1;
- (void)showPageAtIndex:(unsigned int)arg1;
- (void)candidateListShouldBeDismissed:(id)arg1;
- (void)candidateListSelectionDidChange:(id)arg1;
- (void)candidateListAcceptCandidate:(id)arg1;
- (void)setCandidates:(id)arg1 inlineText:(id)arg2 inlineRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg3 maxX:(float)arg4 layout:(BOOL)arg5;
- (void)candidatesDidChange;
- (void)showCandidate:(id)arg1;
- (void)setUIKeyboardCandidateListDelegate:(id)arg1;
- (unsigned int)currentIndex;
- (void)candidateAcceptedAtIndex:(unsigned int)arg1;
- (void)showCandidateAtIndex:(unsigned int)arg1;
- (void)setCandidates:(id)arg1;
- (id)currentCandidate;
- (void)showPreviousPage;
- (void)showNextPage;
- (void)showPreviousCandidate;
- (void)showNextCandidate;
- (void)layout;
- (void)setFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;
- (void)layoutSubviews;
- (id)initWithFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })arg1;

@end
