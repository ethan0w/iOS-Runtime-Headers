/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/DataDetectorsUI.framework/DataDetectorsUI
 */

@interface DDTextKitOperation : DDOperation {
    int  _editCount;
    struct _NSRange { 
        unsigned int location; 
        unsigned int length; 
    }  _range;
}

@property (nonatomic, retain) UITextView *container;
@property struct _NSRange { unsigned int x1; unsigned int x2; } range;

- (BOOL)_addResultToAttributes:(id)arg1 inStorage:(id)arg2;
- (BOOL)_addResultsToAttributesInStorage:(id)arg1;
- (struct __DDScanQuery { }*)_createScanQueryForBackend;
- (BOOL)_rangeValidForContainer;
- (void)_updateGenerationNumber;
- (void)cleanup;
- (void)dispatchContainerModificationBlock:(id /* block */)arg1;
- (BOOL)doURLificationOnDocument;
- (id)initWithContainer:(id)arg1;
- (BOOL)needsToStartOver;
- (id)newOperationForContinuation;
- (id)newOperationForStartingOver;
- (struct _NSRange { unsigned int x1; unsigned int x2; })range;
- (void)setRange:(struct _NSRange { unsigned int x1; unsigned int x2; })arg1;
- (void)textDidChange:(id)arg1;

@end
