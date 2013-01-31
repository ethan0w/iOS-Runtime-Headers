/* Generated by RuntimeBrowser.
   Image: /System/Library/PrivateFrameworks/OfficeImport.framework/OfficeImport
 */

@class NSMutableDictionary, NSMutableArray, NSMutableSet;

@interface CPMessageContext : NSObject  {
    NSMutableSet *m_warnings;
    NSMutableSet *m_errors;
    NSMutableArray *m_currentObjectStack;
    NSMutableDictionary *m_placeholderToObjectIdMap;
}

+ (void)restoreObjectStack:(unsigned int)arg1;
+ (unsigned int)saveObjectStack;
+ (void)replacePlaceholdersWithObjects;
+ (id)pushCurrentPlaceholder;
+ (void)pushCurrentObject:(id)arg1;
+ (BOOL)isFileStructuredStorage;
+ (void)setIsFileStructuredStorage:(BOOL)arg1;
+ (id)getErrorArray;
+ (id)getWarningArray;
+ (void)removeContextForCurrentThread;
+ (void)createContextForCurrentThread;
+ (void)reportErrorException:(id)arg1;
+ (void)reportError:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)reportObject:(id)arg1 withWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg2;
+ (void)popCurrentObject;
+ (void)popCurrentPlaceholder:(id)arg1;
+ (void)setObject:(id)arg1 forPlaceholder:(id)arg2;
+ (id)currentObjectOrPlaceholder;
+ (void)reportObjectOrPlaceholder:(id)arg1 withWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg2 parameters:(void*)arg3;
+ (void)reportWarningException:(id)arg1;
+ (void)reportWarning:(struct CPTaggedMessageStructure { int x1; id x2; }*)arg1;
+ (void)initialize;

- (void)dealloc;
- (id)init;

@end
