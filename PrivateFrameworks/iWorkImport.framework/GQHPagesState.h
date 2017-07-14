/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
 */

@interface GQHPagesState : GQHState <GQWrapPointGenerator> {
    long  mAttachmentIdCounter;
    struct __CFArray { } * mAttachmentPositions;
    GQDSStyle * mCurrentBaseParagraphStyle;
    GQDSStyle * mCurrentBaseSpanStyle;
    struct __CFString { } * mCurrentCachedParagraphClass;
    struct __CFString { } * mCurrentCachedSpanClass;
    BOOL  mCurrentFrameHasSandbagFloats;
    int  mCurrentHintColumnIndex;
    int  mCurrentHintPageIndex;
    GQHStyle * mCurrentLayoutStyle;
    int  mCurrentPageIndex;
    GQHStyle * mCurrentParagraphStyle;
    GQDSStyle * mCurrentSectionStyle;
    GQHStyle * mCurrentSpanStyle;
    GQWrapPointSet * mCurrentWrapPointSet;
    BOOL  mDidFindContainerHint;
    BOOL  mDidInsertPageHeader;
    struct __CFDictionary { } * mDrawablePagesOrderToCssZOrderClassMap;
    long  mFirstAttachmentId;
    struct __CFDictionary { } * mFloatingDrawables;
    struct __CFDictionary { } * mFooters;
    BOOL  mHasLayoutDrawables;
    int  mHeaderFooterPageNumber;
    struct __CFDictionary { } * mHeaders;
    BOOL  mIsMappingHeadersFooters;
    struct CGRect { 
        struct CGPoint { 
            float x; 
            float y; 
        } origin; 
        struct CGSize { 
            float width; 
            float height; 
        } size; 
    }  mLastFrame;
    GQDWPContainerHint * mLastInsertedContainerHint;
    BOOL  mMappingFloatingDrawables;
    int  mMode;
    struct CGSize { 
        float width; 
        float height; 
    }  mPageSize;
    struct __CFDictionary { } * mPageWrapPointsMap;
    int  mProgressiveIndex;
    struct __CFArray { } * mSectionStyles;
    BOOL  mSplitNextAttachment;
    int  mStartPageAt;
    int  mStartPageAtValueChangedAtPageIndex;
    BOOL  mStartedPage;
    BOOL  mStartedSection;
    struct __CFArray { } * mTocHrefStack;
}

@property (readonly, copy) NSString *debugDescription;
@property (readonly, copy) NSString *description;
@property (readonly) unsigned int hash;
@property (readonly) Class superclass;

- (void)addAttachmentPosition:(double)arg1;
- (void)addFloatingDrawable:(id)arg1;
- (void)addSectionStyle:(id)arg1 pageIndex:(int)arg2 numPages:(int)arg3;
- (void)addStyle:(struct __CFString { }*)arg1 className:(struct __CFString { }*)arg2 srcStyle:(id)arg3;
- (void)addWrapPoint:(id)arg1;
- (BOOL)allowInlineWrap;
- (void)beginWrapPointSet;
- (void)clearFloatingDrawables;
- (void)clearWrapPoints;
- (void)closeStateLayoutElementsAndStyles;
- (struct vector<GQUtility::ObjcSharedPtr<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x1; struct ObjcSharedPtr<GQDWrapPoint> {} *x2; struct __compressed_pair<GQUtility::ObjcSharedPtr<GQDWrapPoint> *, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct ObjcSharedPtr<GQDWrapPoint> {} *x_3_1_1; } x3; }*)createListOfWrapPointsAlongY:(float)arg1 minX:(float)arg2 maxX:(float)arg3 zIndex:(int)arg4;
- (struct __CFString { }*)cssZOrderClassForDrawable:(id)arg1;
- (struct __CFString { }*)cssZOrderClassForDrawablePagesOrder:(int)arg1;
- (long)currentAttachmentId;
- (double)currentAttachmentPosition;
- (int)currentPageIndex;
- (void)dealloc;
- (id)drawableAtIndex:(int)arg1;
- (void)endSection;
- (void)endWrapPointSet;
- (void)finishedWithSplitAttachment;
- (long)firstAttachmentId;
- (int)floatingDrawablesCount;
- (id)footerForName:(struct __CFString { }*)arg1;
- (void)handleContainerHint:(id)arg1;
- (BOOL)hasLayoutDrawables;
- (id)headerForName:(struct __CFString { }*)arg1;
- (void)inContent;
- (id)initWithState:(id)arg1 documentSize:(struct CGSize { float x1; float x2; })arg2;
- (void)insertAttachmentPlaceholder;
- (BOOL)isMappingHeadersFooters;
- (void)mapFloatingDrawablesForPageAtIndex:(unsigned int)arg1;
- (int)mode;
- (double)moveToNextAttachmentPosition;
- (BOOL)needAbsolutelyPositionedTables;
- (long)nextAttachmentId;
- (void)openStateLayoutElementsAndStyles;
- (void)overrideSectionStyle:(id)arg1;
- (struct __CFArray { }*)pageDrawables:(int)arg1;
- (int)pageNumberForHeaderOrFooter;
- (struct CGSize { float x1; float x2; })pageSize;
- (struct __CFDictionary { }*)pagesOrderToCssZOrderClassMapDictionary;
- (void)popTocHref;
- (void)pushTocHref:(struct __CFString { }*)arg1;
- (struct { int x1; int x2; })rangeForSectionStyleAtPageIndex:(int)arg1;
- (void)resolveHeaderName:(const struct __CFString {}**)arg1 footerName:(const struct __CFString {}**)arg2;
- (id)sectionStyleForPageIndex:(int)arg1;
- (id)sectionStyleRunForRunBeforePageIndex:(int)arg1;
- (void)setCurrentLayoutStyle:(id)arg1;
- (void)setCurrentPageIndex:(int)arg1;
- (void)setCurrentParagraphStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString { }*)arg3;
- (void)setCurrentSpanStyle:(id)arg1 baseStyle:(id)arg2 cachedClass:(struct __CFString { }*)arg3;
- (void)setDidFindContainerHint:(BOOL)arg1;
- (void)setDidInsertPageHeader:(BOOL)arg1;
- (void)setFooters:(struct __CFArray { }*)arg1;
- (void)setHasLayoutDrawables:(BOOL)arg1;
- (void)setHeaders:(struct __CFArray { }*)arg1;
- (void)setIsMappingHeadersFooters:(BOOL)arg1;
- (void)setMode:(int)arg1;
- (void)setOutlineLevel:(int)arg1;
- (void)setOutlineStyleType:(int)arg1;
- (void)setPageSize:(struct CGSize { float x1; float x2; })arg1;
- (bool)splitNextAttachment;
- (void)startLayout;
- (void)startSection;
- (unsigned int)tocDepth;
- (BOOL)useOutline;
- (id)wrapPointSetForPage:(int)arg1;
- (const struct set<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree<GQUtility::ObjcSharedPtr<GQDWrapPoint>, GQUtility::NSObjectComparator<GQDWrapPoint>, std::__1::allocator<GQUtility::ObjcSharedPtr<GQDWrapPoint> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> {} *x_1_1_1; struct __compressed_pair<std::__1::__tree_end_node<std::__1::__tree_node_base<void *> *>, std::__1::allocator<std::__1::__tree_node<GQUtility::ObjcSharedPtr<GQDWrapPoint>, void *> > > { struct __tree_end_node<std::__1::__tree_node_base<void *> *> { struct __tree_node_base<void *> {} *x_1_3_1; } x_2_2_1; } x_1_1_2; struct __compressed_pair<unsigned long, GQUtility::NSObjectComparator<GQDWrapPoint> > { unsigned long x_3_2_1; struct NSObjectComparator<GQDWrapPoint> { SEL x_2_3_1; } x_3_2_2; } x_1_1_3; } x1; }*)wrapPoints;

@end
