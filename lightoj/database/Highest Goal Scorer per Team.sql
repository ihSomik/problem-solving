SELECT *
FROM Goals
WHERE goals_scored = (
    SELECT MAX(goals_scored)
    FROM Goals g
    WHERE g.team = Goals.team
)
ORDER BY team, player;
