/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface TSCHChartBodyLayoutItem : TSCHChartLayoutItem {
    BOOL  mVertical;
}

- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcDrawingRect;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })calcOverhangRect;
- (unsigned int)countOfElementsForModel:(id)arg1 series:(id)arg2 forGroupsBySeries:(id)arg3 outNewElementBounds:(struct CGRect {}**)arg4 outNewClipRects:(struct CGRect {}**)arg5 outNewElementPaths:(const struct CGPath {}***)arg6;
- (id)initWithParent:(id)arg1;
- (struct CGPath { }*)newDragAndDropHighlightPathForSelection:(id)arg1;
- (void)p_addRendererOfClass:(Class)arg1 andRep:(id)arg2 toArray:(id)arg3;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_calcDrawingRectForModel:(id)arg1;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_calcDrawingRectForReferenceLinesForModel:(id)arg1;
- (id)p_errorBarSubselectionKnobsForSeries:(id)arg1 axisID:(id)arg2;
- (struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; })p_exactLabelsDrawingRectForSeries:(id)arg1;
- (void)p_layoutOutward;
- (void)p_nudgeBarElementFrame:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg1 usingBarModelCache:(id)arg2 unitSpaceValueBegin:(double)arg3 unitSpaceValueEnd:(double)arg4;
- (id)p_refLineSubselectionKnobsForStyleSwapIndex:(unsigned int)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForRenderingLabelForBarColSeries:(unsigned int)arg1 forGroup:(unsigned int)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })p_transformForRenderingLabelForLineAreaSeries:(unsigned int)arg1 forGroup:(unsigned int)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;
- (id)p_trendLineEquationSubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineR2SubselectionKnobsForSeries:(id)arg1;
- (id)p_trendLineSubselectionKnobsForSeries:(id)arg1;
- (id)p_valueLabelSubselectionKnobsForSeries:(id)arg1;
- (void)protected_iterateHitChartElements:(struct CGPoint { float x1; float x2; })arg1 withBlock:(id /* block */)arg2;
- (id)renderersWithRep:(id)arg1;
- (id)subselectionKnobPositionsForSelection:(id)arg1;
- (struct CGAffineTransform { float x1; float x2; float x3; float x4; float x5; float x6; })transformForRenderingLabelForSeries:(unsigned int)arg1 forGroup:(unsigned int)arg2 outElementSize:(struct CGSize { float x1; float x2; }*)arg3 outClipRect:(struct CGRect { struct CGPoint { float x_1_1_1; float x_1_1_2; } x1; struct CGSize { float x_2_1_1; float x_2_1_2; } x2; }*)arg4;

@end
