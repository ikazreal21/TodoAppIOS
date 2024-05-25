// Task.h
#import <Foundation/Foundation.h>

@interface Task : NSObject

@property (nonatomic, copy) NSString *name;
@property (nonatomic, assign) BOOL completed;

- (instancetype)initWithName:(NSString *)name;

@end
