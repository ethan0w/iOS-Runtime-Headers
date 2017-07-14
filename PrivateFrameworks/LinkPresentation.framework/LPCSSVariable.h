/* Generated by RuntimeBrowser
   Image: /System/Library/PrivateFrameworks/LinkPresentation.framework/LinkPresentation
 */

@interface LPCSSVariable : NSObject {
    BOOL  _important;
    NSString * _name;
}

@property (getter=isImportant, nonatomic, readonly) BOOL important;
@property (nonatomic, readonly, copy) NSString *name;

- (void).cxx_destruct;
- (id)initWithName:(id)arg1;
- (id)initWithName:(id)arg1 important:(BOOL)arg2;
- (BOOL)isImportant;
- (id)name;
- (id)variableByResolvingWithThemePath:(id)arg1;

@end
