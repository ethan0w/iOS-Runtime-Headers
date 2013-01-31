/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableArray;

@interface PDParagraphBuild : PDBuild  {
    NSMutableArray *mTimeNodeDataList;
    double mAutoAdvanceTime;
    BOOL mIsReversedParagraphOrder;
    int mBuildLevel;
    int mType;
}


- (int)type;
- (void)dealloc;
- (id)init;
- (int)buildLevel;
- (BOOL)isReversedParagraphOrder;
- (double)autoAdvanceTime;
- (id)timeNodeDataList;
- (id)addTimeNodeData;
- (id)timeNodeDataAtIndex:(int)arg1;
- (int)timeNodeDataListCount;
- (void)setBuildLevel:(int)arg1;
- (void)setIsReversedParagraphOrder:(BOOL)arg1;
- (void)setAutoAdvanceTime:(double)arg1;
- (void)setType:(int)arg1;

@end
