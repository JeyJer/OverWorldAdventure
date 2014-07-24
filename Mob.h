#ifndef MOB_H_INCLUDED
#define MOB_H_INCLUDED



class Mob : public Character
{
private:
    Skill* m_skill;
    Reward m_reward;
public:
    Mob( std::string name, Statistic stat, Skill* skill, Reward reward );
    ~Mob();
    Skill* getSkill();
    Reward getReward();
};

#endif // MOB_H_INCLUDED
